/********************************************************************\
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652       *
 * Boston, MA  02111-1307,  USA       gnu@gnu.org                   *
 *                                                                  *
\********************************************************************/

/* $Header$ */
/** @file iptables.h
    @brief Firewall iptables functions
    @author Copyright (C) 2004 Philippe April <papril777@yahoo.com>
*/

#ifndef _IPTABLES_H_
#define _IPTABLES_H_

#include "firewall.h"

#define TABLE_WIFIDOG_CLASS     "WiFiDog_Class"
#define TABLE_WIFIDOG_OUTGOING  "WiFiDog_Outgoing"
#define TABLE_WIFIDOG_INCOMING  "WiFiDog_Incoming"

#define TABLE_WIFIDOG_VALIDATE  "WiFiDog_Validate"
#define TABLE_WIFIDOG_KNOWN     "WiFiDog_Known"
#define TABLE_WIFIDOG_UNKNOWN   "WiFiDog_Unknown"
#define TABLE_WIFIDOG_LOCKED    "WiFiDog_Locked"

typedef enum fw_access_t_ {
    FW_ACCESS_ALLOW,
    FW_ACCESS_DENY
} fw_access_t;

int iptables_do_command(char *format, ...);
int iptables_fw_init(void);
int iptables_fw_destroy(void);
int iptables_fw_access(fw_access_t type, char *ip, char *mac, int tag);
int iptables_fw_counters(void);

#endif /* _IPTABLES_H_ */
