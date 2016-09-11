//
//  quicksort.hpp
//  CPP_Practice
//


/*
 Quick sort is a divide-and-conquer algorithm that first divides the array to be sorted into two smaller sub-arrays: low elements
 and high elements. It can the recursively  sort the sub-arrays. 
 
 LOGIC:
 1. Pick and element called the pivot from the array.
 2. Reorder the array so that all elements with values less than the pivot come before the pivot and all values greater than the 
 pivot come after the pivot.
 3. Recursively apply the above steps.
 
 Time Complexity:
 Best: O(nlog(n))
 Worst: O(n^2) -->pivot is highest or lowest value in the list
 
 The selection of the pivot can determine the time complexity of the algorithm. If the pivot happens to be the highest or lowest 
 value in the list then you will be dividing the list into subsets of 0 and n-1 repeatedly, resulting in a linear chain call. The
 math for this looks something like:  n-1 + n-2 + ... + 2 + 1 = (n(n-1))/2 -> O(n^2).
 
 If a good pivot is chosen then the list would be divided roughly in half at each call, letting us make only log(n) calls. Because
 there are n elements and log(n) nested calls, the time complexity with a good pivot ends up being O(nlog(n)).
 
 */

#ifndef quicksort_hpp
#define quicksort_hpp

#include <stdio.h>

void QuickSort(int arr[], int left, int right);

#endif /* quicksort_hpp */
