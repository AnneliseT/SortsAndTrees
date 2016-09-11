//
//  selection_sort.hpp
//  CPP_Practice
//


/*
 Selection sort is an in-place, comparison based sorting algorithm that takes O(n^2) time across the board. Selection sort
 works by dividing the input array into two parts: the sublist of items already sorted and the sublist of items remaining 
 to be sorted. At each iteration the algorith finds the smallest(or largest) element in the unsorted list and swaps it with
 the left most unsorted element. It then moves the sublist boundaries one element to the right.
 
 EXAMPLE: (the # represents the sublist boundary)
 
 # 64 25 12 22 11
 11 # 25 12 22 64
 11 12 # 25 22 64
 11 12 22 # 25 64
 11 12 22 25 # 64
 11 12 22 25 64 #
 
 As you can see, given 5 values the algorithm iterates through the list 5 times even thought the list is sorted at the 3rd 
 iteration. This makes gives the algorithm a time complesxity of O(n^2). As a result this algorithm is not very efficient for
 large lists.
 */

#ifndef selection_sort_hpp
#define selection_sort_hpp

#include <stdio.h>

void SelectionSort(int arr[], int s);

#endif /* selection_sort_hpp */
