/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <linux/leds.h>
#include <leds_hal.h>

/****************************************************************************
 * LED DRV functions
 ***************************************************************************/

#ifdef CONTROL_BL_TEMPERATURE
int setMaxbrightness(int max_level, int enable);
#endif

extern int mt65xx_leds_brightness_set(enum mt65xx_led_type type, enum led_brightness level);
#ifdef CONFIG_MTK_LEDS
extern int backlight_brightness_set(int level);
#else
#define backlight_brightness_set(level) do { } while (0)
#endif
extern int disp_bls_set_max_backlight(unsigned int level);

#ifdef CONFIG_TCL_INCELL_FT8006M_HD_CV1
extern unsigned int shutdown_bl_off;
#endif
