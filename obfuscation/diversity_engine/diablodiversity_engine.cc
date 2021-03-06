/* This research is supported by the European Union Seventh Framework Programme (FP7/2007-2013), project ASPIRE (Advanced  Software Protection: Integration, Research, and Exploitation), under grant agreement no. 609734; on-line at https://aspire-fp7.eu/. */

/* {{{ Copyright
 * Copyright 2001,2002: Bertrand Anckaert
 * 			Bruno De Bus
 *                      Bjorn De Sutter
 *                      Dominique Chanet
 *                      Matias Madou
 *                      Ludo Van Put
 *
 *
 * This file is part of Diablo (Diablo is a better link-time optimizer)
 *
 * Diablo is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Diablo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Diablo; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
/* }}} */

#ifdef __cplusplus
extern "C" {
#endif

#include <diablodiversity.h>
#include "diablodiversity_cmdline.h"

 
#ifdef __cplusplus
}
#endif

#include <obfuscation/obfuscation_architecture_backend.h>

/* FORWARD_TO_ITERATIVE is (un)set by diablo_diversity_config.h.in */

static int debug_support = 0;
#if 0
#define DEBUG_CHECK() (debug_support++ < diablosupport_options.debugcounter)
#else
#define DEBUG_CHECK() (TRUE)
#endif

t_int32 DiversityEngine(t_cfg * cfg)
{
  return DiversityEngineIterative(cfg);
}
