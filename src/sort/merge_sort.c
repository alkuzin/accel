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


void accel_merge_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    void  *midp, *bottom, *top;
    usize nbottom, ntop;

    if (nmemb <= 1)
        return;

    nbottom = nmemb / 2;
    ntop    = nmemb - nbottom;
    midp    = (char *)base + (nbottom * size);

    accel_merge_sort(base, nbottom, size, cmp);
    accel_merge_sort(midp, ntop, size, cmp);
    
    bottom  = (char *)malloc(nbottom * size);
    top     = (char *)malloc(ntop * size);
    
    memcpy(bottom, base, nbottom * size);
    memcpy(top, midp, ntop * size);
    
    accel_merge(base, bottom, nbottom, top, ntop, size, cmp);
    
    free(bottom);
    free(top);
}