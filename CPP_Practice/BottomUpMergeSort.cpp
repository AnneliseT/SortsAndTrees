//
//  BottomUpMergeSort.cpp
//  CPP_Practice
//


#include "BottomUpMergeSort.hpp"

void CopyArray (int A[], int B[], int s) {
    for (int i = 0; i < s; i++) {
        A[i] = B[i];
    }
}

void BottomUpMerge (int A[], int iLeft, int iRight, int iEnd, int B[]) {
    int i = iLeft, j = iRight;
    for (int k = iLeft; k < iEnd; k++) {
        if(i <  iRight && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
    }
}

void BottomUpMergeSort (int A[], int B[], int s) {
    for(int w = 1; w < s; w = (2*w) ) {
        for (int i = 0; i < s; i = (i + (2*w))) {
            BottomUpMerge(A,i,min(w + i, s), min(i+(2*w),s), B);
        }
        CopyArray(A, B, s);
    }
}
