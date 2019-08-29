/* Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_USTAT_H
# error "Never include <bits/ustat.h> directly; use <sys/ustat.h> instead."
#endif

#include <sys/types.h>

struct ustat
  {
    __daddr_t f_tfree;		/* Number of free blocks.  */
    __ino_t f_tinode;		/* Number of free inodes.  */
    char f_fname[6];
    char f_fpack[6];
  };
