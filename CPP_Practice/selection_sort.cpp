//
//  selection_sort.cpp
//  CPP_Practice
//


#include "selection_sort.hpp"

void SelectionSort(int arr[], int s) {
    int i,j;
    for(j = 0; j < (s-1); j++) {
        int iMin = j;
        
        for (i = (j+1); i < s; i++) {
            if(arr[i] < arr[iMin]) { iMin = i;}
        }
        if (iMin != j) {
            int tmp = arr[j];
            arr[j] = arr[iMin];
            arr[iMin] = tmp;
        }
    }
}

