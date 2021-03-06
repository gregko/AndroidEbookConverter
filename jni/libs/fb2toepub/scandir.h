//
//  Copyright (C) 2010 Alexey Bobkov
//
//  This file is part of Fb2toepub converter.
//
//  Fb2toepub converter is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Fb2toepub converter is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Fb2toepub converter.  If not, see <http://www.gnu.org/licenses/>.
//


#ifndef FB2TOEPUB__SCANDIR_H
#define FB2TOEPUB__SCANDIR_H

#include "types.h"
#include <string>

namespace Fb2ToEpub
{

//-----------------------------------------------------------------------
// SCAN DIRECTORY
//-----------------------------------------------------------------------
class ScanDir : public Object
{
public:
    virtual String GetNextFile(String *fname) = 0;
};

Ptr<ScanDir> FB2TOEPUB_DECL CreateScanDir(const char *dir, const char *ext);

};  //namespace Fb2ToEpub

#endif
