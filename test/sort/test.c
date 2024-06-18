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
#include <string.h>
#include <stdio.h>
#include <time.h>

#include <accel/types.h>
#include <accel/sort.h>

#include "test.h"


static s32 successfull_tests = 0;
static s32 failed_tests      = 0;


void test_init(void)
{
    srand(time(nullptr));
}

void test_display_result(void)
{
    printf("test: total: %d \t successfull: %d failed: %d\n", 
    successfull_tests + failed_tests, successfull_tests, failed_tests);
}

void test_other(bool flag)
{
    test_other_sort("accel_radix_sort()", accel_radix_sort, 100, flag);
    test_other_sort("accel_shell_sort()", accel_shell_sort, 100, flag);
}

void test_other_sort(const char *func, void (*sort)(s32*, s32), s32 nmemb, bool flag)
{
    clock_t begin_time, end_time;
    s32     *arr, ret;
    f64     run_time;

    puts("------------------------------------------------------------");
    arr = (s32 *)malloc(nmemb * sizeof(s32));

    if(!arr) {
        perror("malloc error");
        exit(EXIT_FAILURE);
    }

    if (flag) {
        printf("test: %s: initial array:\n\n", func);
        
        for (s32 i = 0; i < nmemb; i++) {
            arr[i] = rand() % 10000;
            printf("%d ", arr[i]);
        }
        
        putchar('\n');
        putchar('\n');
    }
    else {
        for (s32 i = 0; i < nmemb; i++)
            arr[i] = rand() % 10000;
    }

    begin_time = clock();
    sort(arr, nmemb);
    end_time = clock();

    run_time = (((f64)(end_time - begin_time)) / CLOCKS_PER_SEC);    

    if (flag) {
        printf("test: %s: sorted array:\n\n", func);
        accel_print_arr(arr, nmemb, TYPE_INT);
    }
    
    printf("\ntest: %s: run time is %.10f sec.\n", func, run_time);
    
    ret = accel_is_sorted(arr, nmemb, sizeof(s32), accel_cmpint);

    if (ret) {
        printf("test: %s: [ SUCCESS ]\n\n", func);
        successfull_tests++;
    }
    else {
        printf("test: %s: < FAIL >\n\n", func);
        failed_tests++;
    }
    
    free(arr);
    puts("------------------------------------------------------------\n\n");
}