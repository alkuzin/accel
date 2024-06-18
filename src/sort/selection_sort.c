/* Accel - The C Template Library
 * Copyright (C) 2024 Alexander (@alkuzin)
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
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


void accel_selection_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    usize i, j, min_index;
    char  *a, *b;

    for (i = 0; i < nmemb - 1; i++) {
        min_index = i;
        
        for (j = i + 1; j < nmemb; j++) {
            a = (char *)base + j * size;
            b = (char *)base + min_index * size;

            if (cmp(a, b) < 0)
                min_index = j;
        }
        
        accel_swap((char *)base + min_index * size, (char *)base + i * size, size);
    }
}