/**
 * debug.h - Designware USB2 DRD controller debug header
 *
 * Copyright (C) 2015 Intel Corporation
 * Mian Yousaf Kaukab <yousaf.kaukab@intel.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2  of
 * the License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "core.h"

struct dwc2_data_statistic {
        spinlock_t lock;
        u64 total_data;
};

#ifdef CONFIG_DEBUG_FS
extern int dwc2_debugfs_init(struct dwc2_hsotg *);
extern void dwc2_debugfs_exit(struct dwc2_hsotg *);
extern void dwc2_statistic_add(u32);
extern void dwc2_statistic_decrease(u32);
extern void dwc2_statistic_clear(void);
#else
static inline int dwc2_debugfs_init(struct dwc2_hsotg *hsotg)
{  return 0;  }
static inline void dwc2_debugfs_exit(struct dwc2_hsotg *hsotg)
{  }
static void dwc2_statistic_add(u32) {}
static void dwc2_statistic_decrease(u32) {}
static void dwc2_statistic_clear(void) {}
#endif
