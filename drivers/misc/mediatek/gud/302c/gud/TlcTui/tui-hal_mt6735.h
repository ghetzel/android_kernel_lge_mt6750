/*
* Copyright (C) 2016 MediaTek Inc.
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#ifndef __TUI_HAL_MT6735__H__
#define __TUI_HAL_MT6735__H__

/* for TUI EINT mepping to Security World */
extern void gt1x_power_reset(void);
extern int mt_eint_set_deint(int eint_num, int irq_num);
extern int mt_eint_clr_deint(int eint_num);

extern int tui_region_offline(phys_addr_t *pa, unsigned long *size);
extern int tui_region_online(void);

extern int tpd_reregister_from_tui(void);
extern int tpd_enter_tui(void);
extern int tpd_exit_tui(void);

extern int i2c_tui_enable_clock(void);
extern int i2c_tui_disable_clock(void);

extern int display_enter_tui(void);
extern int display_exit_tui(void);

extern int secmem_api_alloc_pa(u32 alignment, u32 size, u32 *refcount,
		u32 *sec_handle, const uint8_t *owner, uint32_t id);
extern int secmem_api_unref_pa(u32 sec_handle, const uint8_t *owner, uint32_t id);

#endif
