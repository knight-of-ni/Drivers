// -*- C++ -*-
// $Id$

// DYMO LabelManager LanguageMonitor
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

#ifndef LABEL_MANAGER_LANGUAGE_MONITOR_H
#define LABEL_MANAGER_LANGUAGE_MONITOR_H

#include "PrinterDriver.h"
#include <string>

namespace DymoPrinterDriver
{
// LanguageMonitor for the printers supported LabelManager command set
class ILabelManagerLanguageMonitor: virtual public ILanguageMonitor
{
public:
    virtual ~ILabelManagerLanguageMonitor() {}

    virtual void StartDoc() = 0;
    virtual void EndDoc() = 0;

    virtual void StartPage() = 0;
    virtual void EndPage() = 0;

    virtual void ProcessData(const buffer_t& Data) = 0;
};

}

#endif