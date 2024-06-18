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
 * @file  sort.h
 * @brief Contains some popular sorting algorithms and data types comparison functions.
 *
 * @author Alexander Kuzin (<a href="https://github.com/alkuzin">alkuzin</a>)
 * @date   18.06.2024 
 */

#ifndef _ACCEL_SORT_H_
#define _ACCEL_SORT_H_

#include <accel/types.h>
#include <accel/utils.h>

#define INSERTION_SORT_THRESHOLD 16

/**
 * @brief Bubble sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n)
 * Average case:     O(n^2)
 * Worst case:       O(n^2)
 * Space complexity: O(1)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_bubble_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Selection sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n^2)
 * Average case:     O(n^2)
 * Worst case:       O(n^2)
 * Space complexity: O(1)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_selection_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Insertion sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n)
 * Average case:     O(n^2)
 * Worst case:       O(n^2)
 * Space complexity: O(1)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_insertion_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Organizes the elements in the array so that the subtree
 * rooted at index @a i follows the heap property.
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 * @param [in] i - given index of the root node of the subtree to heapify. 
 */
void accel_heapify(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *), usize i);

/**
 * @brief Heap sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n log n)
 * Average case:     O(n log n)
 * Worst case:       O(n log n)
 * Space complexity: O(1)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_heap_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Merges two sorted sequences into a single sorted sequence.
 * 
 * @param [in] out - given pointer to the destination buffer where the merged sequence will be stored.
 * @param [in] pa - given pointer to the first element of the first sorted sequence.
 * @param [in] na - given number of elements in the first sorted sequence.
 * @param [in] pb - given pointer to the first element of the second sorted sequence.
 * @param [in] nb - given number of elements in the second sorted sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_merge(void *out, const void *pa, usize na, const void *pb, usize nb, 
usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Merge sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n log n)
 * Average case:     O(n log n)
 * Worst case:       O(n log n)
 * Space complexity: O(N)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_merge_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Quick sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * Best case:        O(n log n)
 * Average case:     O(n log n)
 * Worst case:       O(n^2)
 * Space complexity: O(log n)
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_quick_sort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Count sort algorithm.
 * 
 * This function sorts an array @a arr with @a nmemb elements.
 * 
 * Best case:        O(n + k)
 * Average case:     O(n + k)
 * Worst case:       O(n + k)
 * Space complexity: O(k)
 * 
 * @param [in] arr - given array of integers to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] exp - given digit position to sort by.
 */
void accel_count_sort(s32 *arr, s32 nmemb, s32 exp);


/**
 * @brief Radix sort algorithm.
 * 
 * This function sorts an array @a arr with @a nmemb elements.
 * 
 * Best case:        O(nk)
 * Average case:     O(nk)
 * Worst case:       O(nk)
 * Space complexity: O(n + k)
 * 
 * @param [in] arr - given array of integers to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 */
void accel_radix_sort(s32 *arr, s32 nmemb);

/**
 * @brief Shell sort algorithm.
 * 
 * This function sorts an array @a arr with @a nmemb elements.
 * 
 ◦ Best case:        O(n log n)
 ◦ Average case:     O(n log n)
 ◦ Worst case:       O(n^2)
 ◦ Space complexity: O(1)
 * 
 * @param [in] arr - given array of integers to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 */
void accel_shell_sort(s32 *arr, s32 nmemb);

/**
 * @brief Hybrid introspective sort algorithm.
 * 
 * This function sorts an array with @a nmemb elements of size @a size.
 * 
 * There is Radix sort inside, what makes this algorithm even faster,
 * than GNU libc qsort() (only for integers).
 * 
 * Best case:        O(n) - on tiny arrays. [O(nk) for int]
 * Average case:     O(n log n)             [O(nk) for int]
 * Worst case:       O(n log n)             [O(nk) for int]
 * Space complexity: O(log n)               [O(n + k) for int]
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 */
void accel_isort(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

/**
 * @brief Check is array is sorted.
 * 
 * @param [in] base - given pointer to the first element of the sequence to sort.
 * @param [in] nmemb - given number of elements in the sequence.
 * @param [in] size - given size of each element in sequence in bytes.
 * @param [in] cmp - given comparison function pointer.
 * @return true - if array is sorted.
 * @return false - otherwise.
 */
bool accel_is_sorted(void *base, usize nmemb, usize size, s32 (*cmp)(const void *, const void *));

#endif /* _ACCEL_SORT_H_ */