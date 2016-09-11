//
//  insertionsort.cpp
//  CPP_Practice
//


#include "insertionsort.hpp"

void InsertionSort(int arr[], int s) {
    int j, temp;
    for (int i = 0; i < s; i++) {
        j = i;
        while (j > 0 && (arr[j] < arr[j-1])) {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

