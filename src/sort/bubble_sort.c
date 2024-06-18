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


void accel_bubble_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *))
{
    char *a, *b;

    for (usize i = 0; i < nmemb - 1; i++) {
        for (usize j = 0; j < nmemb - i - 1; j++) {
            a = (char *)base + j * size;
            b = (char *)base + (j + 1) * size;

            if (cmp(a, b) > 0)
                accel_swap(a, b, size);
        }
    }
}