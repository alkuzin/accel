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

#include <accel/types.h>
#include <accel/utils.h>


void accel_print_arr(void *base, size_t nmemb, type_t type)
{
    switch (type) {
    
        case TYPE_INT:
            s32 *arr_int;

            (void)arr_int;
            arr_int = (s32 *)base;

            for (usize i = 0; i < nmemb; i++)
                printf(TYPE_FORMAT_INT, arr_int[i]);
            break;
    
        case TYPE_DOUBLE:
            f64 *arr_double;

            (void)arr_double;
            arr_double = (f64 *)base;

            for (usize i = 0; i < nmemb; i++)
                printf(TYPE_FORMAT_DOUBLE, arr_double[i]);
            break;
    
        case TYPE_CHAR:
            char *arr_char;

            (void)arr_char;
            arr_char = (char *)base;

            for (usize i = 0; i < nmemb; i++)
                printf(TYPE_FORMAT_CHAR, arr_char[i]);
            break;
    
        case TYPE_STRING:
            char **arr_str;

            (void)arr_str;
            arr_str = (char **)base;

            for (usize i = 0; i < nmemb; i++)
                printf(TYPE_FORMAT_STRING, arr_str[i]);
            break;
    
        default:
            puts("test: incorrect type!");
            exit(EXIT_FAILURE);
            break;
    }

    putchar('\n');
}