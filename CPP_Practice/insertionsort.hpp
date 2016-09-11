//
//  insertionsort.hpp
//  CPP_Practice
//


/*
 Insertion sort is an in-place sorting algorithm that builds the final sorted array one element at a time. At each iteration the 
 algorithm removes one element from teh input data, finds the lcoation it belongs within the sorted listand inserts it there. This 
 occurs until no input elements remain. Sorting is done in place by iterating up the array and growing the sorted list behind the 
 current location.
    
 If the array is already sorte then the time complexity is O(n) because there is no array shifting to be done. If the list is not 
 ordered/sorted then the time complexity can reach O(n^2). This time complexity can be achieved if the data is in reverse order.
 
 Because the time complexity changes with the sortedness of the data, insertion sort is categorized as an adaptive algorithm. 
 
 EXAMPLE: (The * represents the current location in the array/list)
 
 3 7 4 9 5 2 6 1
 *
 3 7 4 9 5 2 6 1
   *
 3 7 4 9 5 2 6 1
     *
 3 4 7 9 5 2 6 1
       *
 3 7 4 9 5 2 6 1
         *
 3 4 5 7 9 2 6 1
           *
 2 3 4 5 7 9 6 1
             *
 2 3 4 5 6 7 9 1
               *
 1 2 3 4 5 6 7 9
 
 */

#ifndef insertionsort_hpp
#define insertionsort_hpp

#include <stdio.h>

void InsertionSort(int arr[], int s);

#endif /* insertionsort_hpp */
