/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright © 2010 Thomas Martitz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/


#include "config.h"
#include "audiohw.h"
#if defined(DX50) || defined(DX90)
#include "system.h"
#include "pcm_sw_volume.h"
#endif

#if defined(DX50) || defined(DX90)
void audiohw_set_volume(int vol_l, int vol_r)
{
    int hw_volume;
    hw_volume = MAX(vol_l, vol_r);

#ifdef HAVE_SW_VOLUME_CONTROL
    vol_l-=hw_volume;
    vol_r-=hw_volume;
    pcm_set_master_volume(vol_l, vol_r);
#endif

    extern void pcm_set_mixer_volume(int);
    pcm_set_mixer_volume(hw_volume);

}
#else
void audiohw_set_volume(int volume)
{
    extern void pcm_set_mixer_volume(int);
    pcm_set_mixer_volume(volume);
}
#endif

void audiohw_set_balance(int balance)
{
    (void)balance;
}

void audiohw_close(void)
{
#if !defined(DX50) && !defined(DX90)
    extern void pcm_shutdown(void);
    pcm_shutdown();
#endif
}
