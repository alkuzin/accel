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
 * @file  stat.h
 * @brief Contains some math statistics functions.
 *
 * @author Alexander Kuzin (<a href="https://github.com/alkuzin">alkuzin</a>)
 * @date   18.06.2024 
 */

#ifndef _ACCEL_STAT_H_
#define _ACCEL_STAT_H_

#include <accel/types.h>
#include <accel/utils.h>


/**
 * @brief Calculate mean value of given data. 
 * 
 * @param [in] data - given array.
 * @param [in] nmemb - given number of elements in the array.
 * @return mean value.
 */
f64 accel_mean(const f64 *data, usize nmemb);


#endif /* _ACCEL_STAT_H_ */