/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2014 by Marcin Bukat
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

#include <stdbool.h> 
#include "config.h"
#include "system.h"
#include "backlight.h"
#include "backlight-target.h"
#include "lcd.h"
#include "regs/regs-cmu.h"
#include "regs/regs-pmu.h"

bool _backlight_init(void)
{
    /* backlight clock enable, select backlight clock as 32kHz */
    CMU_FMCLK = (CMU_FMCLK & ~(BM_CMU_FMCLK_BCKS|BM_CMU_FMCLK_BCKCON)) | 
                (BF_CMU_FMCLK_BCKE(1)|BF_CMU_FMCLK_BCKS(0));

    /* baclight enable */
    PMU_CTL |= BF_PMU_CTL_BL_EN(1);

    /* pwm output, phase high, some initial duty cycle set as 24/32 */
    PMU_CHG = ((PMU_CHG & ~BM_PMU_CHG_PDUT)|
              (BF_PMU_CHG_PBLS(1)|BF_PMU_CHG_PPHS(1)|BF_PMU_CHG_PDUT(24)));
}

void _backlight_on(void)
{
#ifdef HAVE_LCD_ENABLE
    lcd_enable(true);
#endif
    /* baclight enable */
    PMU_CTL |= BF_PMU_CTL_BL_EN(1);
}

void _backlight_off(void)
{
    PMU_CTL &= ~BM_PMU_CTL_BL_EN;
#ifdef HAVE_LCD_ENABLE
    lcd_enable(false);
#endif
}

void _backlight_set_brightness(int val)
{
    /* TODO: linear percived lightness scalling */
    /* set duty cycle in 1/32 units */
    PMU_CHG = ((PMU_CHG & ~BM_PMU_CHG_PDUT) | BF_PMU_CHG_PDUT(level));
}
