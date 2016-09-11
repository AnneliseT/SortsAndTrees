//
//  TopDownMergeSort.hpp
//  CPP_Practice
//

/*
 Merge sort is a comparison based sorting algorithm that usually produces a stable sort. This means that the implementation
 preserves the input order of equal elements it the sorted output. The algorithm works by dividing the unsorted array into n
 subsets, each containing one element. The sublists are then repeatedly merged to produce new sorted sublists until there is
 only one sorted "sublist" remaining.
 
 This is not an in-place sort. This implementation uses a working array B[] to sort in that is then copied back into the
 array to be sorted A[] for further sorting.
 */

#ifndef TopDownMergeSort_hpp
#define TopDownMergeSort_hpp

#include <stdio.h>

void CopyArray(int A[], int iBegin, int iEnd, int B[]);
void TopDownMerge(int A[], int iBegin, int iMiddle, int iEnd, int B[]);
void TopDownSplitMerge(int A[], int iBegin, int iEnd, int B[]);
void TopDownMergeSort(int A[], int B[], int s);


#endif /* TopDownMergeSort_hpp */
