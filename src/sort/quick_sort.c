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


void accel_quick_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    char  *pivot, *temp;
    usize i, j;

    if (nmemb <= 1)
        return;
    
    pivot = (char *)malloc(size);
    memcpy(pivot, (char *)base + (nmemb / 2) * size, size);

    i = 0;
    j = nmemb - 1;

    while (i <= j) {

        while (cmp((char *)base + i * size, pivot) < 0)
            i++;

        while (cmp((char *)base + j * size, pivot) > 0)
            j--;

        if (i <= j) {
            temp = (char *)malloc(size);

            memcpy(temp, (char *)base + i * size, size);
            memcpy((char *)base + i * size, (char *)base + j * size, size);
            memcpy((char *)base + j * size, temp, size);
            
            free(temp);

            i++;
            j--;
        }
    }

    if (j > 0)
        accel_quick_sort(base, j + 1, size, cmp);

    if (i < nmemb)
        accel_quick_sort((char *)base + i * size, nmemb - i, size, cmp);

    free(pivot);
}