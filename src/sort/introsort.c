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

#include <math.h>
#include <accel/sort.h>


void accel_isort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    s32 depth_limit;
    
    if (size == sizeof(s32))
        accel_radix_sort((s32 *)base, nmemb);
    else {
        depth_limit = 2 * log(size);
        
        if (nmemb <= INSERTION_SORT_THRESHOLD) {
            accel_insertion_sort(base, nmemb, size, cmp);
            return;
        }

        if (depth_limit == 0) {
            accel_heap_sort(base, nmemb, size, cmp);
            return;
        }

        accel_quick_sort(base, nmemb, size, cmp);
    }
}