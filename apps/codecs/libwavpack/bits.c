////////////////////////////////////////////////////////////////////////////
//                           **** WAVPACK ****                            //
//                  Hybrid Lossless Wavefile Compressor                   //
//              Copyright (c) 1998 - 2004 Conifer Software.               //
//                          All Rights Reserved.                          //
//      Distributed under the BSD Software License (see license.txt)      //
////////////////////////////////////////////////////////////////////////////

// bits.c

// This module provides utilities to support the BitStream structure which is
// used to read and write all WavPack audio data streams. It also contains a
// wrapper for the stream I/O functions and a set of functions dealing with
// endian-ness, both for enhancing portability. Finally, a debug wrapper for
// the malloc() system is provided.

#include "wavpack.h"

#include <string.h>
#include <ctype.h>

/* dirty fix */
const char _ctype_[257]={
	0,
        _C,	_C,	_C,	_C,	_C,	_C,	_C,	_C,
        _C,	_C|_S,	_C|_S,	_C|_S,	_C|_S,	_C|_S,	_C,	_C,
        _C,	_C,	_C,	_C,	_C,	_C,	_C,	_C,
        _C,	_C,	_C,	_C,	_C,	_C,	_C,	_C,
        _S|_B,	_P,	_P,	_P,	_P,	_P,	_P,	_P,
        _P,	_P,	_P,	_P,	_P,	_P,	_P,	_P,
        _N,	_N,	_N,	_N,	_N,	_N,	_N,	_N,
        _N,	_N,	_P,	_P,	_P,	_P,	_P,	_P,
        _P,	_U|_X,	_U|_X,	_U|_X,	_U|_X,	_U|_X,	_U|_X,	_U,
        _U,	_U,	_U,	_U,	_U,	_U,	_U,	_U,
        _U,	_U,	_U,	_U,	_U,	_U,	_U,	_U,
        _U,	_U,	_U,	_P,	_P,	_P,	_P,	_P,
        _P,	_L|_X,	_L|_X,	_L|_X,	_L|_X,	_L|_X,	_L|_X,	_L,
        _L,	_L,	_L,	_L,	_L,	_L,	_L,	_L,
        _L,	_L,	_L,	_L,	_L,	_L,	_L,	_L,
        _L,	_L,	_L,	_P,	_P,	_P,	_P,	_C
};

////////////////////////// Bitstream functions ////////////////////////////////

// Open the specified BitStream and associate with the specified buffer.

static void bs_read (Bitstream *bs);

void bs_open_read (Bitstream *bs, uchar *buffer_start, uchar *buffer_end, read_stream file, ulong file_bytes)
{
    CLEAR (*bs);
    bs->buf = buffer_start;
    bs->end = buffer_end;

    if (file) {
	bs->ptr = bs->end - 1;
	bs->file_bytes = file_bytes;
	bs->file = file;
    }
    else
	bs->ptr = bs->buf - 1;

    bs->wrap = bs_read;
}

// This function is only called from the getbit() and getbits() macros when
// the BitStream has been exhausted and more data is required. Sinve these
// bistreams no longer access files, this function simple sets an error and
// resets the buffer.

static void bs_read (Bitstream *bs)
{
    if (bs->file && bs->file_bytes) {
	ulong bytes_read, bytes_to_read = bs->end - bs->buf;

	if (bytes_to_read > bs->file_bytes)
	    bytes_to_read = bs->file_bytes;

	bytes_read = bs->file (bs->buf, bytes_to_read);

	if (bytes_read) {
	    bs->end = bs->buf + bytes_read;
	    bs->file_bytes -= bytes_read;
	}
	else {
	    memset (bs->buf, -1, bs->end - bs->buf);
	    bs->error = 1;
	}
    }
    else
	bs->error = 1;

    if (bs->error)
	memset (bs->buf, -1, bs->end - bs->buf);

    bs->ptr = bs->buf;
}

/////////////////////// Endian Correction Routines ////////////////////////////

void little_endian_to_native (void *data, char *format)
{
    uchar *cp = (uchar *) data;
    long temp;

    while (*format) {
	switch (*format) {
	    case 'L':
		temp = cp [0] + ((long) cp [1] << 8) + ((long) cp [2] << 16) + ((long) cp [3] << 24);
		* (long *) cp = temp;
		cp += 4;
		break;

	    case 'S':
		temp = cp [0] + (cp [1] << 8);
		* (short *) cp = (short) temp;
		cp += 2;
		break;

	    default:
		if (isdigit (*format))
		    cp += *format - '0';

		break;
	}

	format++;
    }
}

void native_to_little_endian (void *data, char *format)
{
    uchar *cp = (uchar *) data;
    long temp;

    while (*format) {
	switch (*format) {
	    case 'L':
		temp = * (long *) cp;
		*cp++ = (uchar) temp;
		*cp++ = (uchar) (temp >> 8);
		*cp++ = (uchar) (temp >> 16);
		*cp++ = (uchar) (temp >> 24);
		break;

	    case 'S':
		temp = * (short *) cp;
		*cp++ = (uchar) temp;
		*cp++ = (uchar) (temp >> 8);
		break;

	    default:
		if (isdigit (*format))
		    cp += *format - '0';

		break;
	}

	format++;
    }
}
