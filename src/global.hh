/* Copyright (C) 2015 Cotton Seed
   
   This file is part of arachne-pnr.  Arachne-pnr is free software;
   you can redistribute it and/or modify it under the terms of the GNU
   General Public License version 2 as published by the Free Software
   Foundation.
   
   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>. */

#ifndef PNR_GLOBAL_HH
#define PNR_GLOBAL_HH

class Design;
class ChipDB;

#include "util.hh"

static const uint8_t gc_clk = 0xff;
static const uint8_t gc_cen = 0xaa; // 1357
static const uint8_t gc_rclke = 0x8a; // 137, 5 missing
static const uint8_t gc_sr = 0x55;  // 0246
static const uint8_t gc_re = 0x54; // 246, 0 missing

static const uint8_t gc_wclke = gc_cen;
static const uint8_t gc_we = gc_sr;

extern const char *global_class_name(uint8_t gc);

extern std::vector<uint8_t> global_classes;

extern std::map<Instance *, uint8_t, IdLess>
promote_globals(const ChipDB *chipdb, Design *d, bool promote);

#endif
