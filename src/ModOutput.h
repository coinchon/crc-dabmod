/*
   Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010, 2011 Her Majesty
   the Queen in Right of Canada (Communications Research Center Canada)
 */
/*
   This file is part of CRC-DADMOD.

   CRC-DADMOD is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   CRC-DADMOD is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with CRC-DADMOD.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MOD_OUTPUT_H
#define MOD_OUTPUT_H

#ifdef HAVE_CONFIG_H
#   include <config.h>
#endif


#include "ModPlugin.h"

#include <sys/types.h>


class ModOutput : public ModPlugin
{
public:
    ModOutput(ModFormat inputFormat, ModFormat outputFormat);
    virtual ~ModOutput();

    virtual int process(std::vector<Buffer*> dataIn,
            std::vector<Buffer*> dataOut);
    virtual int process(Buffer* dataIn, Buffer* dataOut) = 0;

protected:
#ifdef DEBUG
    FILE* myOutputFile;
    static size_t myCount;
#endif
};


#endif // MOD_OUTPUT_H
