//
//  TopDownMergeSort.cpp
//  CPP_Practice
//


#include "TopDownMergeSort.hpp"

//Supporting Funcitons:
void CopyArray(int A[], int iBegin, int iEnd, int B[]) {
    for( int k = iBegin; k < iEnd; k++) {
        A[k] = B[k];
    }
}

void TopDownMerge(int A[], int iBegin, int iMiddle, int iEnd, int B[]) {
    int i = iBegin, j = iMiddle;
    for (int k = iBegin; k < iEnd; k++) {
        if(i < iMiddle && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
    }
}

void TopDownSplitMerge(int A[], int iBegin, int iEnd, int B[]) {
    if(iEnd - iBegin < 2) {return;}
    int iMiddle = (iBegin + iEnd)/2;
    TopDownSplitMerge(A, iBegin, iMiddle, B);
    TopDownSplitMerge(A, iMiddle, iEnd, B);
    TopDownMerge(A, iBegin, iMiddle, iEnd, B);
    CopyArray(A, iBegin, iEnd, B);
}
//Main MergeSort function
void TopDownMergeSort(int A[], int B[], int s) {TopDownSplitMerge(A, 0, s, B);}
