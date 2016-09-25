//
//  BinarySearch.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/24/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#include "BinarySearch.hpp"


int BinSearch (int A[], int s, int e, int value) {
    int index;
    int first = s;
    int last = e;
    
    if (first > last) {
        return -1;
    } else {
        int mid = (first + last)/2;
        if (A[mid] == value) {
            index = mid;
        } else if (value < A[mid]) {
            index = BinSearch(A, first, mid - 1, value);
        } else {
            index = BinSearch(A, mid + 1, last, value);
        }
    }
    return index;
}
