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
 * @file  types.h
 * @brief Provides definitions for various data types used in kernel programming. 
 * 
 * @details It includes typedefs for standard data types such as integers, characters, and etc.
 * 
 * @author Alexander Kuzin (<a href="https://github.com/alkuzin">alkuzin</a>)
 * @date   18.06.2024 
 */

#ifndef _ACCEL_TYPES_H_
#define _ACCEL_TYPES_H_

/* unsigned types */
typedef unsigned long   u64;
typedef unsigned int    u32;
typedef unsigned short  u16;
typedef unsigned char   u8;

/* signed types */
typedef long   s64;
typedef int    s32;
typedef short  s16;
typedef char   s8;

/* floating point types */
typedef double f64;
typedef float  f32;

#define usize  u64
#define ssize  s64

/** @brief Data types enumeration. */
typedef enum {
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_CHAR,
    TYPE_STRING
} type_t;

#endif /* _ACCEL_TYPES_H_ */