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


void accel_heapify(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *), usize i)
{
    usize largest, left, right;
    char  *arr;

    arr     = (char *)base;
    largest = i;
    left    = 2 * i + 1;
    right   = 2 * i + 2;

    if (left < nmemb && cmp(arr + left * size, arr + largest * size) > 0)
        largest = left;

    if (right < nmemb && cmp(arr + right * size, arr + largest * size) > 0)
        largest = right;

    if (largest != i) {
        accel_swap(arr + i * size, arr + largest * size, size);
        accel_heapify(arr, nmemb, size, cmp, largest);
    }
}
