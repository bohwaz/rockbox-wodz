/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: atj213x:1.0
 *
 * Copyright (C) 2015 by Marcin Bukat
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
#ifndef __HEADERGEN__ATJ213X__CMU__H__
#define __HEADERGEN__ATJ213X__CMU__H__
#include "regs-macro.h"

#define REGS_CMU_BASE (0xb0010000)

#define REGS_CMU_VERSION "1.0"

/**
 * Register: CMU_COREPLL
 * Address: 0
 * SCT: no
 */
#define CMU_COREPLL                     (*(volatile unsigned long *)(REGS_CMU_BASE + 0x0))
#define BP_CMU_COREPLL_RESERVED31_11    11
#define BM_CMU_COREPLL_RESERVED31_11    0xfffff800
#define BF_CMU_COREPLL_RESERVED31_11(v) (((v) << 11) & 0xfffff800)
/* Field: CPBY
 * Description: Core PLL Bypass  */
#define BP_CMU_COREPLL_CPBY             10
#define BM_CMU_COREPLL_CPBY             0x400
#define BF_CMU_COREPLL_CPBY(v)          (((v) << 10) & 0x400)
/* Field: CPBI
 * Description: Core PLL Bias  */
#define BP_CMU_COREPLL_CPBI             8
#define BM_CMU_COREPLL_CPBI             0x300
#define BF_CMU_COREPLL_CPBI(v)          (((v) << 8) & 0x300)
/* Field: CPEN
 * Description: Core PLL Enable  */
#define BP_CMU_COREPLL_CPEN             7
#define BM_CMU_COREPLL_CPEN             0x80
#define BF_CMU_COREPLL_CPEN(v)          (((v) << 7) & 0x80)
/* Field: HOEN
 * Description: High Oscillator Enable */
#define BP_CMU_COREPLL_HOEN             6
#define BM_CMU_COREPLL_HOEN             0x40
#define BF_CMU_COREPLL_HOEN(v)          (((v) << 6) & 0x40)
/* Field: CPCK
 * Description: COREPLLout = CPCK * 6 (MHz) (in range 12 - 378MHz) */
#define BP_CMU_COREPLL_CPCK             0
#define BM_CMU_COREPLL_CPCK             0x3f
#define BF_CMU_COREPLL_CPCK(v)          (((v) << 0) & 0x3f)

/**
 * Register: CMU_DSPPLL
 * Address: 0x4
 * SCT: no
 */
#define CMU_DSPPLL                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x4))
#define BP_CMU_DSPPLL_RESERVED31_9      9
#define BM_CMU_DSPPLL_RESERVED31_9      0xfffffe00
#define BF_CMU_DSPPLL_RESERVED31_9(v)   (((v) << 9) & 0xfffffe00)
/* Field: DPBI
 * Description: DSP PLL Bias */
#define BP_CMU_DSPPLL_DPBI              7
#define BM_CMU_DSPPLL_DPBI              0x180
#define BF_CMU_DSPPLL_DPBI(v)           (((v) << 7) & 0x180)
/* Field: DPEN
 * Description: DSP PLL Enable */
#define BP_CMU_DSPPLL_DPEN              6
#define BM_CMU_DSPPLL_DPEN              0x40
#define BF_CMU_DSPPLL_DPEN(v)           (((v) << 6) & 0x40)
/* Field: DPCK
 * Description: DSPPLLout = DPCK * 6 (MHz) (in range 12-378MHz) */
#define BP_CMU_DSPPLL_DPCK              0
#define BM_CMU_DSPPLL_DPCK              0x3f
#define BF_CMU_DSPPLL_DPCK(v)           (((v) << 0) & 0x3f)

/**
 * Register: CMU_AUDIOPLL
 * Address: 0x8
 * SCT: no
 */
#define CMU_AUDIOPLL                        (*(volatile unsigned long *)(REGS_CMU_BASE + 0x8))
#define BP_CMU_AUDIOPLL_RESERVED31_12       12
#define BM_CMU_AUDIOPLL_RESERVED31_12       0xfffff000
#define BF_CMU_AUDIOPLL_RESERVED31_12(v)    (((v) << 12) & 0xfffff000)
/* Field: ADCPLL
 * Description: Audio PLL CLk Control */
#define BP_CMU_AUDIOPLL_ADCPLL              11
#define BM_CMU_AUDIOPLL_ADCPLL              0x800
#define BF_CMU_AUDIOPLL_ADCPLL(v)           (((v) << 11) & 0x800)
/* Field: ADCCLK
 * Description: ADC Clock Divisor, output is FS*256 */
#define BP_CMU_AUDIOPLL_ADCCLK              8
#define BM_CMU_AUDIOPLL_ADCCLK              0x700
#define BF_CMU_AUDIOPLL_ADCCLK(v)           (((v) << 8) & 0x700)
#define BP_CMU_AUDIOPLL_RESERVED7           7
#define BM_CMU_AUDIOPLL_RESERVED7           0x80
#define BF_CMU_AUDIOPLL_RESERVED7(v)        (((v) << 7) & 0x80)
/* Field: APBI
 * Description: Audio PLL Bias */
#define BP_CMU_AUDIOPLL_APBI                5
#define BM_CMU_AUDIOPLL_APBI                0x60
#define BF_CMU_AUDIOPLL_APBI(v)             (((v) << 5) & 0x60)
/* Field: APEN
 * Description: Audio PLL Enable */
#define BP_CMU_AUDIOPLL_APEN                4
#define BM_CMU_AUDIOPLL_APEN                0x10
#define BF_CMU_AUDIOPLL_APEN(v)             (((v) << 4) & 0x10)
/* Field: DACPLL
 * Description: DAC PLL CLk Control */
#define BP_CMU_AUDIOPLL_DACPLL              3
#define BM_CMU_AUDIOPLL_DACPLL              0x8
#define BF_CMU_AUDIOPLL_DACPLL(v)           (((v) << 3) & 0x8)
/* Field: DACCLK
 * Description: DAC Clock Divisor, output is FS*256 */
#define BP_CMU_AUDIOPLL_DACCLK              0
#define BM_CMU_AUDIOPLL_DACCLK              0x7
#define BF_CMU_AUDIOPLL_DACCLK(v)           (((v) << 0) & 0x7)

/**
 * Register: CMU_BUSCLK
 * Address: 0xc
 * SCT: no
 * Description: Bus CLK Control Register
 */
#define CMU_BUSCLK                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0xc))
/* Field: KEYE
 * Description: Key Wakeup Enable */
#define BP_CMU_BUSCLK_KEYE              31
#define BM_CMU_BUSCLK_KEYE              0x80000000
#define BF_CMU_BUSCLK_KEYE(v)           (((v) << 31) & 0x80000000)
/* Field: ALME
 * Description: Alarm Wakeup Enable */
#define BP_CMU_BUSCLK_ALME              30
#define BM_CMU_BUSCLK_ALME              0x40000000
#define BF_CMU_BUSCLK_ALME(v)           (((v) << 30) & 0x40000000)
/* Field: SIRE
 * Description: SIRQ Wakeup Enable */
#define BP_CMU_BUSCLK_SIRE              29
#define BM_CMU_BUSCLK_SIRE              0x20000000
#define BF_CMU_BUSCLK_SIRE(v)           (((v) << 29) & 0x20000000)
#define BP_CMU_BUSCLK_RESERVED28        28
#define BM_CMU_BUSCLK_RESERVED28        0x10000000
#define BF_CMU_BUSCLK_RESERVED28(v)     (((v) << 28) & 0x10000000)
/* Field: USBE
 * Description: Usb Wakeup Enable */
#define BP_CMU_BUSCLK_USBE              27
#define BM_CMU_BUSCLK_USBE              0x8000000
#define BF_CMU_BUSCLK_USBE(v)           (((v) << 27) & 0x8000000)
#define BP_CMU_BUSCLK_RESERVED26_12     12
#define BM_CMU_BUSCLK_RESERVED26_12     0x7fff000
#define BF_CMU_BUSCLK_RESERVED26_12(v)  (((v) << 12) & 0x7fff000)
/* Field: PCLKDIV
 * Description: Peripheral CLK Divisor */
#define BP_CMU_BUSCLK_PCLKDIV           8
#define BM_CMU_BUSCLK_PCLKDIV           0xf00
#define BF_CMU_BUSCLK_PCLKDIV(v)        (((v) << 8) & 0xf00)
/* Field: CORECLKS
 * Description: CPU Clock Selection */
#define BP_CMU_BUSCLK_CORECLKS          6
#define BM_CMU_BUSCLK_CORECLKS          0xc0
#define BF_CMU_BUSCLK_CORECLKS(v)       (((v) << 6) & 0xc0)
/* Field: SCLKDIV
 * Description: System Clock Divisor */
#define BP_CMU_BUSCLK_SCLKDIV           4
#define BM_CMU_BUSCLK_SCLKDIV           0x30
#define BF_CMU_BUSCLK_SCLKDIV(v)        (((v) << 4) & 0x30)
/* Field: CCLKDIV
 * Description: CPU Clock Divisor */
#define BP_CMU_BUSCLK_CCLKDIV           2
#define BM_CMU_BUSCLK_CCLKDIV           0xc
#define BF_CMU_BUSCLK_CCLKDIV(v)        (((v) << 2) & 0xc)
/* Field: DCEN
 * Description: Core CLK DC Enable */
#define BP_CMU_BUSCLK_DCEN              1
#define BM_CMU_BUSCLK_DCEN              0x2
#define BF_CMU_BUSCLK_DCEN(v)           (((v) << 1) & 0x2)

/**
 * Register: CMU_SDRCLK
 * Address: 0x10
 * SCT: no
 * Description: SDRAM Interface CLK Control Register
 */
#define CMU_SDRCLK                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x10))
#define BP_CMU_SDRCLK_RESERVED31_2      2
#define BM_CMU_SDRCLK_RESERVED31_2      0xfffffffc
#define BF_CMU_SDRCLK_RESERVED31_2(v)   (((v) << 2) & 0xfffffffc)
#define BP_CMU_SDRCLK_SDRDIV            0
#define BM_CMU_SDRCLK_SDRDIV            0x3
#define BF_CMU_SDRCLK_SDRDIV(v)         (((v) << 0) & 0x3)

/**
 * Register: CMU_NANDCLK
 * Address: 0x18
 * SCT: no
 * Description: NAND Interface CLK Control Register
 */
#define CMU_NANDCLK                     (*(volatile unsigned long *)(REGS_CMU_BASE + 0x18))
#define BP_CMU_NANDCLK_RESERVED31_4     4
#define BM_CMU_NANDCLK_RESERVED31_4     0xfffffff0
#define BF_CMU_NANDCLK_RESERVED31_4(v)  (((v) << 4) & 0xfffffff0)
#define BP_CMU_NANDCLK_NANDDIV          0
#define BM_CMU_NANDCLK_NANDDIV          0xf
#define BF_CMU_NANDCLK_NANDDIV(v)       (((v) << 0) & 0xf)

/**
 * Register: CMU_SDCLK
 * Address: 0x1c
 * SCT: no
 * Description: SD Interface CLK Control Register
 */
#define CMU_SDCLK                       (*(volatile unsigned long *)(REGS_CMU_BASE + 0x1c))
#define BP_CMU_SDCLK_RESERVED31_6       6
#define BM_CMU_SDCLK_RESERVED31_6       0xffffffc0
#define BF_CMU_SDCLK_RESERVED31_6(v)    (((v) << 6) & 0xffffffc0)
/* Field: CKEN
 * Description: SD Interface Clock Enable */
#define BP_CMU_SDCLK_CKEN               5
#define BM_CMU_SDCLK_CKEN               0x20
#define BF_CMU_SDCLK_CKEN(v)            (((v) << 5) & 0x20)
/* Field: D128
 * Description: Enable Divide 128 circuit */
#define BP_CMU_SDCLK_D128               4
#define BM_CMU_SDCLK_D128               0x10
#define BF_CMU_SDCLK_D128(v)            (((v) << 4) & 0x10)
#define BP_CMU_SDCLK_SDDIV              0
#define BM_CMU_SDCLK_SDDIV              0xf
#define BF_CMU_SDCLK_SDDIV(v)           (((v) << 0) & 0xf)

/**
 * Register: CMU_MHACLK
 * Address: 0x20
 * SCT: no
 * Description: MHA CLK Control Register
 */
#define CMU_MHACLK                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x20))
#define BP_CMU_MHACLK_RESERVED31_4      4
#define BM_CMU_MHACLK_RESERVED31_4      0xfffffff0
#define BF_CMU_MHACLK_RESERVED31_4(v)   (((v) << 4) & 0xfffffff0)
#define BP_CMU_MHACLK_MHADIV            0
#define BM_CMU_MHACLK_MHADIV            0xf
#define BF_CMU_MHACLK_MHADIV(v)         (((v) << 0) & 0xf)

/**
 * Register: CMU_UART2CLK
 * Address: 0x2c
 * SCT: no
 * Description: Uart2 CLK Control Register
 */
#define CMU_UART2CLK                        (*(volatile unsigned long *)(REGS_CMU_BASE + 0x2c))
#define BP_CMU_UART2CLK_RESERVED31_17       17
#define BM_CMU_UART2CLK_RESERVED31_17       0xfffe0000
#define BF_CMU_UART2CLK_RESERVED31_17(v)    (((v) << 17) & 0xfffe0000)
/* Field: U2EN
 * Description: Uart2 Clock Enable  */
#define BP_CMU_UART2CLK_U2EN                16
#define BM_CMU_UART2CLK_U2EN                0x10000
#define BF_CMU_UART2CLK_U2EN(v)             (((v) << 16) & 0x10000)
#define BP_CMU_UART2CLK_UART2DIV            0
#define BM_CMU_UART2CLK_UART2DIV            0xffff
#define BF_CMU_UART2CLK_UART2DIV(v)         (((v) << 0) & 0xffff)

/**
 * Register: CMU_DMACLK
 * Address: 0x30
 * SCT: no
 * Description: DMA CLK Control Register
 */
#define CMU_DMACLK                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x30))
#define BP_CMU_DMACLK_RESERVED31_4      4
#define BM_CMU_DMACLK_RESERVED31_4      0xfffffff0
#define BF_CMU_DMACLK_RESERVED31_4(v)   (((v) << 4) & 0xfffffff0)
/* Field: D7EN
 * Description: DMA 7 (Special Channel) Clock Enable */
#define BP_CMU_DMACLK_D7EN              3
#define BM_CMU_DMACLK_D7EN              0x8
#define BF_CMU_DMACLK_D7EN(v)           (((v) << 3) & 0x8)
/* Field: D6EN
 * Description: DMA 6 (Special Channel) Clock Enable */
#define BP_CMU_DMACLK_D6EN              2
#define BM_CMU_DMACLK_D6EN              0x4
#define BF_CMU_DMACLK_D6EN(v)           (((v) << 2) & 0x4)
/* Field: D5EN
 * Description: DMA 5 (Special Channel) Clock Enable */
#define BP_CMU_DMACLK_D5EN              1
#define BM_CMU_DMACLK_D5EN              0x2
#define BF_CMU_DMACLK_D5EN(v)           (((v) << 1) & 0x2)
/* Field: D4EN
 * Description: DMA 4 (Special Channel) Clock Enable */
#define BP_CMU_DMACLK_D4EN              0
#define BM_CMU_DMACLK_D4EN              0x1
#define BF_CMU_DMACLK_D4EN(v)           (((v) << 0) & 0x1)

/**
 * Register: CMU_FMCLK
 * Address: 0x34
 * SCT: no
 * Description: FM CLK Control Register
 */
#define CMU_FMCLK                       (*(volatile unsigned long *)(REGS_CMU_BASE + 0x34))
#define BP_CMU_FMCLK_RESERVED31_6       6
#define BM_CMU_FMCLK_RESERVED31_6       0xffffffc0
#define BF_CMU_FMCLK_RESERVED31_6(v)    (((v) << 6) & 0xffffffc0)
/* Field: BCKE
 * Description: PWM Back Light clock Enable */
#define BP_CMU_FMCLK_BCKE               5
#define BM_CMU_FMCLK_BCKE               0x20
#define BF_CMU_FMCLK_BCKE(v)            (((v) << 5) & 0x20)
/* Field: BCKS
 * Description: Back Light CLK source select */
#define BP_CMU_FMCLK_BCKS               4
#define BM_CMU_FMCLK_BCKS               0x10
#define BF_CMU_FMCLK_BCKS(v)            (((v) << 4) & 0x10)
/* Field: BCKCON
 * Description: Divided PWM Back Light Special Clock Control */
#define BP_CMU_FMCLK_BCKCON             2
#define BM_CMU_FMCLK_BCKCON             0xc
#define BF_CMU_FMCLK_BCKCON(v)          (((v) << 2) & 0xc)
/* Field: CLKS
 * Description: FM Clock Output Selection */
#define BP_CMU_FMCLK_CLKS               1
#define BM_CMU_FMCLK_CLKS               0x2
#define BF_CMU_FMCLK_CLKS(v)            (((v) << 1) & 0x2)
/* Field: OUTE
 * Description: FM Clock Output Enable (From Test Pin) */
#define BP_CMU_FMCLK_OUTE               0
#define BM_CMU_FMCLK_OUTE               0x1
#define BF_CMU_FMCLK_OUTE(v)            (((v) << 0) & 0x1)

/**
 * Register: CMU_MCACLK
 * Address: 0x38
 * SCT: no
 * Description: MCA CLK Control Register
 */
#define CMU_MCACLK                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x38))
#define BP_CMU_MCACLK_RESERVED31_4      4
#define BM_CMU_MCACLK_RESERVED31_4      0xfffffff0
#define BF_CMU_MCACLK_RESERVED31_4(v)   (((v) << 4) & 0xfffffff0)
#define BP_CMU_MCACLK_MCADIV            0
#define BM_CMU_MCACLK_MCADIV            0xf
#define BF_CMU_MCACLK_MCADIV(v)         (((v) << 0) & 0xf)

/**
 * Register: CMU_DEVCLKEN
 * Address: 0x80
 * SCT: no
 * Description: Device CLK Control Register
 */
#define CMU_DEVCLKEN                        (*(volatile unsigned long *)(REGS_CMU_BASE + 0x80))
#define BP_CMU_DEVCLKEN_RESERVED31_27       27
#define BM_CMU_DEVCLKEN_RESERVED31_27       0xf8000000
#define BF_CMU_DEVCLKEN_RESERVED31_27(v)    (((v) << 27) & 0xf8000000)
#define BP_CMU_DEVCLKEN_GPIO                26
#define BM_CMU_DEVCLKEN_GPIO                0x4000000
#define BF_CMU_DEVCLKEN_GPIO(v)             (((v) << 26) & 0x4000000)
#define BP_CMU_DEVCLKEN_KEY                 25
#define BM_CMU_DEVCLKEN_KEY                 0x2000000
#define BF_CMU_DEVCLKEN_KEY(v)              (((v) << 25) & 0x2000000)
#define BP_CMU_DEVCLKEN_RESERVED24          24
#define BM_CMU_DEVCLKEN_RESERVED24          0x1000000
#define BF_CMU_DEVCLKEN_RESERVED24(v)       (((v) << 24) & 0x1000000)
#define BP_CMU_DEVCLKEN_I2C                 23
#define BM_CMU_DEVCLKEN_I2C                 0x800000
#define BF_CMU_DEVCLKEN_I2C(v)              (((v) << 23) & 0x800000)
#define BP_CMU_DEVCLKEN_UART                22
#define BM_CMU_DEVCLKEN_UART                0x400000
#define BF_CMU_DEVCLKEN_UART(v)             (((v) << 22) & 0x400000)
#define BP_CMU_DEVCLKEN_RESERVED21_19       19
#define BM_CMU_DEVCLKEN_RESERVED21_19       0x380000
#define BF_CMU_DEVCLKEN_RESERVED21_19(v)    (((v) << 19) & 0x380000)
#define BP_CMU_DEVCLKEN_ADC                 18
#define BM_CMU_DEVCLKEN_ADC                 0x40000
#define BF_CMU_DEVCLKEN_ADC(v)              (((v) << 18) & 0x40000)
#define BP_CMU_DEVCLKEN_DAC                 17
#define BM_CMU_DEVCLKEN_DAC                 0x20000
#define BF_CMU_DEVCLKEN_DAC(v)              (((v) << 17) & 0x20000)
#define BP_CMU_DEVCLKEN_DSPC                16
#define BM_CMU_DEVCLKEN_DSPC                0x10000
#define BF_CMU_DEVCLKEN_DSPC(v)             (((v) << 16) & 0x10000)
#define BP_CMU_DEVCLKEN_MCA                 15
#define BM_CMU_DEVCLKEN_MCA                 0x8000
#define BF_CMU_DEVCLKEN_MCA(v)              (((v) << 15) & 0x8000)
#define BP_CMU_DEVCLKEN_MHA                 14
#define BM_CMU_DEVCLKEN_MHA                 0x4000
#define BF_CMU_DEVCLKEN_MHA(v)              (((v) << 14) & 0x4000)
#define BP_CMU_DEVCLKEN_USBC                13
#define BM_CMU_DEVCLKEN_USBC                0x2000
#define BF_CMU_DEVCLKEN_USBC(v)             (((v) << 13) & 0x2000)
#define BP_CMU_DEVCLKEN_RESERVED12          12
#define BM_CMU_DEVCLKEN_RESERVED12          0x1000
#define BF_CMU_DEVCLKEN_RESERVED12(v)       (((v) << 12) & 0x1000)
#define BP_CMU_DEVCLKEN_SD                  11
#define BM_CMU_DEVCLKEN_SD                  0x800
#define BF_CMU_DEVCLKEN_SD(v)               (((v) << 11) & 0x800)
#define BP_CMU_DEVCLKEN_RESERVED10          10
#define BM_CMU_DEVCLKEN_RESERVED10          0x400
#define BF_CMU_DEVCLKEN_RESERVED10(v)       (((v) << 10) & 0x400)
#define BP_CMU_DEVCLKEN_NAND                9
#define BM_CMU_DEVCLKEN_NAND                0x200
#define BF_CMU_DEVCLKEN_NAND(v)             (((v) << 9) & 0x200)
#define BP_CMU_DEVCLKEN_DMAC                8
#define BM_CMU_DEVCLKEN_DMAC                0x100
#define BF_CMU_DEVCLKEN_DMAC(v)             (((v) << 8) & 0x100)
#define BP_CMU_DEVCLKEN_PCNT                7
#define BM_CMU_DEVCLKEN_PCNT                0x80
#define BF_CMU_DEVCLKEN_PCNT(v)             (((v) << 7) & 0x80)
#define BP_CMU_DEVCLKEN_SDRM                6
#define BM_CMU_DEVCLKEN_SDRM                0x40
#define BF_CMU_DEVCLKEN_SDRM(v)             (((v) << 6) & 0x40)
#define BP_CMU_DEVCLKEN_SDRC                5
#define BM_CMU_DEVCLKEN_SDRC                0x20
#define BF_CMU_DEVCLKEN_SDRC(v)             (((v) << 5) & 0x20)
#define BP_CMU_DEVCLKEN_DSPM                4
#define BM_CMU_DEVCLKEN_DSPM                0x10
#define BF_CMU_DEVCLKEN_DSPM(v)             (((v) << 4) & 0x10)
#define BP_CMU_DEVCLKEN_RESERVED3           3
#define BM_CMU_DEVCLKEN_RESERVED3           0x8
#define BF_CMU_DEVCLKEN_RESERVED3(v)        (((v) << 3) & 0x8)
#define BP_CMU_DEVCLKEN_RMOC                2
#define BM_CMU_DEVCLKEN_RMOC                0x4
#define BF_CMU_DEVCLKEN_RMOC(v)             (((v) << 2) & 0x4)
#define BP_CMU_DEVCLKEN_YUV                 1
#define BM_CMU_DEVCLKEN_YUV                 0x2
#define BF_CMU_DEVCLKEN_YUV(v)              (((v) << 1) & 0x2)
#define BP_CMU_DEVCLKEN_RESERVED0           0
#define BM_CMU_DEVCLKEN_RESERVED0           0x1
#define BF_CMU_DEVCLKEN_RESERVED0(v)        (((v) << 0) & 0x1)

/**
 * Register: CMU_DEVRST
 * Address: 0x84
 * SCT: no
 * Description: Device Reset Control Register
 */
#define CMU_DEVRST                      (*(volatile unsigned long *)(REGS_CMU_BASE + 0x84))
#define BP_CMU_DEVRST_RESERVED31        31
#define BM_CMU_DEVRST_RESERVED31        0x80000000
#define BF_CMU_DEVRST_RESERVED31(v)     (((v) << 31) & 0x80000000)
#define BP_CMU_DEVRST_GPIO              30
#define BM_CMU_DEVRST_GPIO              0x40000000
#define BF_CMU_DEVRST_GPIO(v)           (((v) << 30) & 0x40000000)
#define BP_CMU_DEVRST_KEY               29
#define BM_CMU_DEVRST_KEY               0x20000000
#define BF_CMU_DEVRST_KEY(v)            (((v) << 29) & 0x20000000)
#define BP_CMU_DEVRST_RESERVED28        28
#define BM_CMU_DEVRST_RESERVED28        0x10000000
#define BF_CMU_DEVRST_RESERVED28(v)     (((v) << 28) & 0x10000000)
#define BP_CMU_DEVRST_I2C               27
#define BM_CMU_DEVRST_I2C               0x8000000
#define BF_CMU_DEVRST_I2C(v)            (((v) << 27) & 0x8000000)
#define BP_CMU_DEVRST_UART              26
#define BM_CMU_DEVRST_UART              0x4000000
#define BF_CMU_DEVRST_UART(v)           (((v) << 26) & 0x4000000)
#define BP_CMU_DEVRST_RESERVED25_23     23
#define BM_CMU_DEVRST_RESERVED25_23     0x3800000
#define BF_CMU_DEVRST_RESERVED25_23(v)  (((v) << 23) & 0x3800000)
#define BP_CMU_DEVRST_ADC               22
#define BM_CMU_DEVRST_ADC               0x400000
#define BF_CMU_DEVRST_ADC(v)            (((v) << 22) & 0x400000)
#define BP_CMU_DEVRST_DAC               21
#define BM_CMU_DEVRST_DAC               0x200000
#define BF_CMU_DEVRST_DAC(v)            (((v) << 21) & 0x200000)
/* Field: DSPC
 * Description: DSP control block reset */
#define BP_CMU_DEVRST_DSPC              20
#define BM_CMU_DEVRST_DSPC              0x100000
#define BF_CMU_DEVRST_DSPC(v)           (((v) << 20) & 0x100000)
#define BP_CMU_DEVRST_INTC              19
#define BM_CMU_DEVRST_INTC              0x80000
#define BF_CMU_DEVRST_INTC(v)           (((v) << 19) & 0x80000)
#define BP_CMU_DEVRST_RTC               18
#define BM_CMU_DEVRST_RTC               0x40000
#define BF_CMU_DEVRST_RTC(v)            (((v) << 18) & 0x40000)
#define BP_CMU_DEVRST_PMU               17
#define BM_CMU_DEVRST_PMU               0x20000
#define BF_CMU_DEVRST_PMU(v)            (((v) << 17) & 0x20000)
#define BP_CMU_DEVRST_RESERVED16_14     14
#define BM_CMU_DEVRST_RESERVED16_14     0x1c000
#define BF_CMU_DEVRST_RESERVED16_14(v)  (((v) << 14) & 0x1c000)
/* Field: DSPM
 * Description: SRAM DSP MEM reset */
#define BP_CMU_DEVRST_DSPM              13
#define BM_CMU_DEVRST_DSPM              0x2000
#define BF_CMU_DEVRST_DSPM(v)           (((v) << 13) & 0x2000)
#define BP_CMU_DEVRST_TVENC             12
#define BM_CMU_DEVRST_TVENC             0x1000
#define BF_CMU_DEVRST_TVENC(v)          (((v) << 12) & 0x1000)
#define BP_CMU_DEVRST_YUV               11
#define BM_CMU_DEVRST_YUV               0x800
#define BF_CMU_DEVRST_YUV(v)            (((v) << 11) & 0x800)
#define BP_CMU_DEVRST_MCA               10
#define BM_CMU_DEVRST_MCA               0x400
#define BF_CMU_DEVRST_MCA(v)            (((v) << 10) & 0x400)
#define BP_CMU_DEVRST_USB               9
#define BM_CMU_DEVRST_USB               0x200
#define BF_CMU_DEVRST_USB(v)            (((v) << 9) & 0x200)
#define BP_CMU_DEVRST_RESERVED8         8
#define BM_CMU_DEVRST_RESERVED8         0x100
#define BF_CMU_DEVRST_RESERVED8(v)      (((v) << 8) & 0x100)
#define BP_CMU_DEVRST_MHA               7
#define BM_CMU_DEVRST_MHA               0x80
#define BF_CMU_DEVRST_MHA(v)            (((v) << 7) & 0x80)
#define BP_CMU_DEVRST_SD                6
#define BM_CMU_DEVRST_SD                0x40
#define BF_CMU_DEVRST_SD(v)             (((v) << 6) & 0x40)
#define BP_CMU_DEVRST_NAND              5
#define BM_CMU_DEVRST_NAND              0x20
#define BF_CMU_DEVRST_NAND(v)           (((v) << 5) & 0x20)
#define BP_CMU_DEVRST_RESERVED4         4
#define BM_CMU_DEVRST_RESERVED4         0x10
#define BF_CMU_DEVRST_RESERVED4(v)      (((v) << 4) & 0x10)
#define BP_CMU_DEVRST_DMAC              3
#define BM_CMU_DEVRST_DMAC              0x8
#define BF_CMU_DEVRST_DMAC(v)           (((v) << 3) & 0x8)
#define BP_CMU_DEVRST_PCNT              2
#define BM_CMU_DEVRST_PCNT              0x4
#define BF_CMU_DEVRST_PCNT(v)           (((v) << 2) & 0x4)
#define BP_CMU_DEVRST_RESERVED1         1
#define BM_CMU_DEVRST_RESERVED1         0x2
#define BF_CMU_DEVRST_RESERVED1(v)      (((v) << 1) & 0x2)
/* Field: SDR
 * Description: SDRAM Control register and SDRAM block Reset */
#define BP_CMU_DEVRST_SDR               0
#define BM_CMU_DEVRST_SDR               0x1
#define BF_CMU_DEVRST_SDR(v)            (((v) << 0) & 0x1)

#endif /* __HEADERGEN__ATJ213X__CMU__H__ */
