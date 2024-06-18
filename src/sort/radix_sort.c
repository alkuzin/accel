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


void accel_radix_sort(s32 *arr, s32 nmemb)
{
    s32 max;

    max = accel_get_max(arr, nmemb);

    for (s32 exp = 1; max / exp > 0; exp *= 10)
        accel_count_sort(arr, nmemb, exp);
}