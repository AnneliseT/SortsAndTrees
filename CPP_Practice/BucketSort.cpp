//
//  BucketSort.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/25/16.
//  Copyright © 2016 Annelise Tsueda. All rights reserved.
//

#include "BucketSort.hpp"

void BucketSort(int A[], int n) {
    
    int buckets[101] = {};
    
    for (int i = 0; i < n; i++) {
        ++buckets[A[i]];
    }
    for (int i = 0, j = 0; j < 101; ++j) {
        for (int k = buckets[j]; k > 0; --k) {
            A[i++]= j;
        }
    }
}