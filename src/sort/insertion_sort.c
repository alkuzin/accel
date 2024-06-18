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


void accel_insertion_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    usize  i, j;
    char   *tmp;

    tmp = (char *)malloc(size);
    
    for (i = 1; i < nmemb; i++) {
        memcpy(tmp, (char *)base + i * size, size);
        
        for (j = i; j > 0 && cmp((char *)base + (j - 1) * size, tmp) > 0; j--)
            memcpy((char *)base + j * size, (char *)base + (j - 1) * size, size);
        
        memcpy((char *)base + j * size, tmp, size);
    }

    free(tmp);
}