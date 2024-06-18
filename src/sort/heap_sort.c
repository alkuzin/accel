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


void accel_heap_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    char *arr;

    arr = (char *)base;

    for (usize i = nmemb / 2 - 1; i < nmemb; i--)
        accel_heapify(arr, nmemb, size, cmp, i);

    for (usize i = nmemb - 1; i > 0; i--) {
        accel_swap(arr, arr + i * size, size);
        accel_heapify(arr, i, size, cmp, 0);
    }
}