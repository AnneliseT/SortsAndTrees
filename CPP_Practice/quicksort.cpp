//
//  quicksort.cpp
//  CPP_Practice
//


#include "quicksort.hpp"

//QUICKSORT:
void QuickSort(int arr[], int left, int right) {
    
    /*variables*/
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right)/2];
    
    /*partition*/
    while(i<=j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        
        if (i<=j) {
            tmp = arr[i];
            //cout<<"tmp: "<<tmp<<endl;
            arr[i]= arr[j];
            arr[j] =tmp;
            //cout<<"arr[i]"<<arr[i]<<endl;
            i++;
            j--;
        }
    }
    
    /*recursion*/
    if (left < i)
        QuickSort(arr, left, j);
    if (i < right)
        QuickSort(arr, i, right);
}
