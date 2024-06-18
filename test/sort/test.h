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

/** @brief Initialize sort algorithms test. */
void test_init(void);

/** @brief Display total, successfull & failed number of tests. */
void test_display_result(void);



/**
 * @brief Test "Others" group of sort algorithms. 
 * 
 * @param [in] flag - given verbose flag (when true - prints initial and sorted arrays).
 */
void test_other(bool flag);

/**
 * @brief Test single sort algorithms from "Others" group.
 * 
 * @param [in] func - given name of the function.
 * @param [in] sort - given sort algorithm pointer.
 * @param [in] nmemb - given number of elements in sequence.
 * @param [in] flag - given verbose flag (when true - prints initial and sorted arrays).
 */
void test_other_sort(const char *func, void (*sort)(s32*, s32), s32 nmemb, bool flag);