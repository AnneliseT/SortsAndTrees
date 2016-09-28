//
//  FibSearch.cpp
//  CPP_Practice
//
//

#include "FibSearch.hpp"

int min(int x, int y) {return (x<=y)? x:y;}

int FibSearch (int A[], int value, int n) {
    int FibMm2 = 0;
    int FibMm1 = 1;
    int FibM = FibMm1 + FibMm2;
    
    while(FibM < n) {
        FibMm2 = FibMm1;
        FibMm1 = FibM;
        FibM = FibMm1 + FibMm2;
    }
    
    //marks the eliminated range from the front.
    int offset = -1;
    
    while (FibM > 1) {
        
        //check if FibMm2 is a valid location
        int i = min(FibMm2 + offset, n-1);
        
        if (A[i] < value) {
            FibM = FibMm1;
            FibMm1 = FibMm2;
            FibMm2 = FibM - FibMm1;
            offset = i;
        } else if (A[i] > value){
            FibM = FibMm2;
            FibMm1 = FibMm1 - FibMm2;
            FibMm2 = FibM - FibMm1;
        } else {
            return i;
        }
    }
    
    if (FibMm1 && A[offset + 1] == value) {
        return offset + 1;
    }
    
    return -1;
}
