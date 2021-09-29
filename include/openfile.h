//  Copyright (C) 2021 Benjamin Stürz
//  
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef FILE_OPENFILE_H
#define FILE_OPENFILE_H
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

inline static FILE* openfile_in(const char* filename) {
   return !strcmp(filename, "-") ? stdin : fopen(filename, "r");
}

inline static FILE* openfile_out(const char* filename) {
   return !strcmp(filename, "-") ? stdout : fopen(filename, "r");
}

inline static void closefile(FILE* file) {
   if (file != stdin && file != stdout)
      fclose(file);
}

#endif /* FILE_OPENFILE_H */
