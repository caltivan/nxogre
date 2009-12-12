/** 
    
    This file is part of NxOgre.
    
    Copyright (c) 2009 Robin Southern, http://www.nxogre.org
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
    
*/

                                                                                       

#ifndef NXOGRE_MALLOCALLOCATOR_H
#define NXOGRE_MALLOCALLOCATOR_H

                                                                                       

#include "NxOgreStable.h"

                                                                                       

namespace NxOgre
{

                                                                                       

/*! class. MallocAllocator
    desc.
        An allocator using malloc/free/realloc functions with optional tracking.
    note.
         The following macros must be defined in the NxOgre project settings to be tracking enabled.
         NXOGRE_MEMORY_DEBUGGER_USEFILE
         NXOGRE_MEMORY_DEBUGGER_FILE=RelativeFileName.txt
*/
class NxOgrePublicClass MallocAllocator
{
  
 public:
  
#ifdef NXOGRE_DEBUG
  static void* allocateBytes(size_t length, const char* file, unsigned int line);
#else
  static void* allocateBytes(size_t length);
#endif
  static void* reallocateBytes(void* memory, size_t newLength);
  
  static void  deallocateBytes(void* memory);
  
};

                                                                                       

} // namespace NxOgre

                                                                                       

#endif