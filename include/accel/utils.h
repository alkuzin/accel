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

/**
 * @file  utils.h
 * @brief Contains some auxilar functions.
 *
 * @author Alexander Kuzin (<a href="https://github.com/alkuzin">alkuzin</a>)
 * @date   18.06.2024 
 */

#ifndef _ACCEL_UTILS_H_
#define _ACCEL_UTILS_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <accel/types.h>

#define TYPE_FORMAT_SIZE 4
#define TYPE_FORMAT_INT     "%d "
#define TYPE_FORMAT_DOUBLE  "%lf "
#define TYPE_FORMAT_CHAR    "%c "
#define TYPE_FORMAT_STRING  "%s "

/**
 * @brief Compares two integers pointed to by the given pointers. 
 * 
 * @param [in] p1 - given pointer to the first integer to compare.
 * @param [in] p2 - given pointer to the second integer to compare.
 * 
 * @return a positive value if @a p1 is greater  @a p2.
 * @return 0, if @a p1 equals @a p2.
 * @return a negative if @a p1 is less than @a p2.
 */
s32  accel_cmpint(const void *p1, const void *p2);

/**
 * @brief Compares two strings pointed to by the given pointers. 
 * 
 * @param [in] p1 - given pointer to the first string to compare.
 * @param [in] p2 - given pointer to the second string to compare.
 * 
 * @return a positive value if @a p1 is greater  @a p2.
 * @return 0, if @a p1 equals @a p2.
 * @return a negative if @a p1 is less than @a p2.
 */
s32  accel_cmpstr(const void *p1, const void *p2);

/**
 * @brief Compares two doubles pointed to by the given pointers. 
 * 
 * @param [in] p1 - given pointer to the first double to compare.
 * @param [in] p2 - given pointer to the second double to compare.
 * 
 * @return a positive value if @a p1 is greater  @a p2.
 * @return 0, if @a p1 equals @a p2.
 * @return a negative if @a p1 is less than @a p2.
 */
s32  accel_cmpdouble(const void *p1, const void *p2);

/**
 * @brief Compares two characters pointed to by the given pointers. 
 * 
 * @param [in] p1 - given pointer to the first character to compare.
 * @param [in] p2 - given pointer to the second character to compare.
 * 
 * @return a positive value if @a p1 is greater  @a p2.
 * @return 0, if @a p1 equals @a p2.
 * @return a negative if @a p1 is less than @a p2.
 */
s32  accel_cmpchar(const void *p1, const void *p2);

/**
 * @brief Swaps the contents of two memory regions of a given size.
 *
 * @param [in] p1 - given pointer to the start of the first memory block to swap.
 * @param [in] p2 - given pointer to the start of the second memory block to swap.
 * @param [in] size - given size of the memory blocks to swap, in bytes.
 */
void accel_swap(void *p1, void *p2, usize size);


/**
 * @brief Get the max element of the int array.
 * 
 * @param [in] arr - given array of integers.
 * @param [in] nmemb - given number of elements in the sequence.
 * 
 * @return max element of @a arr.
 */
s32 accel_get_max(s32 *arr, s32 nmemb);

/**
 * @brief Print given memory region in hexadecimal format.
 * 
 * @param [in] base - given pointer to the first element of the sequence to print.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 */
void accel_print_hex(void *base, usize nmemb, usize size);

/**
 * @brief Print array.
 * 
 * @param [in] base - given pointer to the first element of the sequence to print.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] type - given data type of array to print.
 */
void accel_print_arr(void *base, size_t nmemb, type_t type);

/**
 * @brief Print error. 
 * 
 * @param [in] fmt - given format string. 
 * @param [in] ... - given arguments. 
 */
void accel_error(const char *fmt, ...);

#endif /* _ACCEL_UTILS_H_ */
