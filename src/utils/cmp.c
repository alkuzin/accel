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

#include <string.h>
#include <accel/utils.h>


s32 accel_cmpint(const void *p1, const void *p2)
{
    s32 n1, n2;
    
    n1 = *(int *)p1;
    n2 = *(int *)p2;

    return ((n1 > n2) - (n1 < n2));
}

s32 accel_cmpstr(const void *p1, const void *p2)
{
    char *s1, *s2;

    s1 = *(char **)p1;
    s2 = *(char **)p2;
    
    return strcmp(s1, s2);
}

s32 accel_cmpdouble(const void *p1, const void *p2)
{
    double d1, d2;

    d1 = *(const double *)p1;
    d2 = *(const double *)p2;

    return ((d1 > d2) - (d1 < d2));
}

s32 accel_cmpchar(const void *p1, const void *p2)
{
    char c1, c2;

    c1 = *(char *)p1;
    c2 = *(char *)p2;
    
    if (c1 < c2)
        return -1;
    else if (c1 > c2)
        return 1;
    else
        return 0;
}