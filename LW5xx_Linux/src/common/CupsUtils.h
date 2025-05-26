// -*- C++ -*-
// $Id$

// DYMO Printer Drivers
// Copyright (C) 2016 Sanford L.P.

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 31 Milk Street, # 960789, Boston, MA 02196 USA.

#include <cups/cups.h>

namespace DymoPrinterDriver
{
    class CCupsUtils
    {
    public:
        static const char* GetCupsOption(const char* name, int num_options, cups_option_t* options, const char* value = NULL);
    };
};