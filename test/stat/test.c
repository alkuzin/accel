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

#include <stdlib.h>
#include <stdio.h>

#include <accel/types.h>
#include <accel/stat.h>

#include "test.h"


static s32 successfull_tests = 0;
static s32 failed_tests      = 0;


void test_display_result(void)
{
    printf("test: total: %d \t successfull: %d failed: %d\n", 
    successfull_tests + failed_tests, successfull_tests, failed_tests);
}