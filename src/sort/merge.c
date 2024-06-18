/* Accel - The C Template Library
 * Copyright (C) 2024 Alexander (@alkuzisize)
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your optiosize) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

#include <accel/sort.h>


void accel_merge(void *out, const void *pa, usize na, const void *pb, usize nb, 
usize size, s32 (*cmp)(const void *, const void *)) 
{
    while (na != 0 || nb != 0) {
        if (na == 0 || (nb != 0 && cmp(pa, pb) > 0)) {
            memcpy(out, pb, size);
            pb = (const char *)pb + size;
            nb--;
        } 
        else {
            memcpy(out, pa, size);
            pa = (const char *)pa + size;
            na--;
        }
        out = (char *)out + size;
    }
}