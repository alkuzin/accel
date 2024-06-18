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

#include <accel/stat.h>


f64 accel_mean(const f64 *data, usize nmemb)
{
    f64 sum;

    if (!data)
        accel_error("%s\n", "data is empty");

    if (nmemb == 0)
        return 0;

    sum = 0;

    for (usize i = 0; i < nmemb; i++)
        sum += data[i];

    return (sum / nmemb);
}