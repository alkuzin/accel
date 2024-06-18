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


void accel_shell_sort(s32 *arr, s32 nmemb)
{
    s32 temp, k;

    for (s32 i = nmemb / 2; i > 0; i /= 2) {
        for (s32 j = i; j < nmemb; j++) {
            temp = arr[j];

            for (k = j; k >= i && arr[k - i] > temp; k -= i)
                arr[k] = arr[k - i];

            arr[k] = temp;
        }
     }
}