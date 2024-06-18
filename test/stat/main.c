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

void test_mean(void)
{
    double data[10][10] = {
        {-1.5, 2.7, -3.8, 4.2, -5.1, 6.9, -7.3, 8.4, -9.6, 10.8},
        {11.2, -12.4, 13.6, -14.8, 15.1, -16.3, 17.5, -18.7, 19.9, -20.0},
        {21.4, -22.6, 23.8, -24.0, 25.2, -26.4, 27.6, -28.8, 29.0, -30.2},
        {31.5, -32.7, 33.9, -34.1, 35.3, -36.5, 37.7, -38.9, 39.1, -40.3},
        {41.4, -42.6, 43.8, -44.0, 45.2, -46.4, 47.6, -48.8, 49.0, -50.2},
        {51.3, -52.5, 53.7, -54.9, 55.1, -56.3, 57.5, -58.7, 59.9, -60.0},
        {61.2, -62.4, 63.6, -64.8, 65.0, -66.2, 67.4, -68.6, 69.8, -70.0},
        {71.1, -72.3, 73.5, -74.7, 75.9, -76.1, 77.3, -78.5, 79.7, -80.9},
        {81.0, -82.2, 83.4, -84.6, 85.8, -86.0, 87.2, -88.4, 89.6, -90.8},
        {91.9, -92.1, 93.3, -94.5, 95.7, -96.9, 97.1, -98.3, 99.5, -100.7}
    };

    f64 mean;

    for (usize i = 0; i < 10; i++) {
        for (usize j = 0; j < 10; j++) {
            mean = accel_mean(data[i], 10);
            accel_print_arr(data[i], 10, TYPE_DOUBLE);
            printf("test: mean: %lf\n", mean);
        }
    }
}

int main(void)
{
    test_mean();

    return 0;
}