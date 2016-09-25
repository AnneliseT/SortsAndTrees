//
//  main.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/5/16.
//
//

#include <iostream>
#include "basics.h" //this includes all of the header files for the project.


using namespace std;


int main() {
    
    //ARRAY SORTS------------------------------------------------------------------------------------------------------------//
    
    
    /*VARIABLES*/
    //int arr[] = {3,7,8,5,2,1,9,5,4};
    //int s = (sizeof(arr)/sizeof(arr[0])); //size of array in bites divided by size of element in bites gives you size.
    
    //Working array for sorts that are not in place. Must be same size as original array.
    //int B[s];
    
    /*SORTS*/
    //Quicksort is off by one element if you don't subtract one from size
    //QuickSort(arr,0,s-1);
    //InsertionSort(arr, s);
    //SelectionSort(arr, s);
    //TopDownMergeSort(arr, B, s);
    //BottomUpMergeSort(arr,B,s);
    //BucketSort(arr, s);

    
    /*Print function */
    /*
    for (int i = 0; i < s ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    
    /*SEARCHES*/
    //int res = BinSearch(arr,0,7,7);
    //int res = FibSearch(arr, 5 , 9);
    
    //cout<<"Result of Search: "<<res<<endl;
    
    
    //-----------------------------------------------------------------------------------------------------------------------//
    
    
    //BASIC BINARY TREE CREATION, TRAVERSAL, etc.----------------------------------------------------------------------------//
    
    /*
    BTree bTree;
    double nums[] = {9,8,7,4,3,6,5};
    int n = (sizeof(nums)/sizeof(nums[0]));
    
    for( int x = 0; x < n; x++) {
        bTree.addNode(nums[x]);
    }
    
    bTree.PreOrder(bTree.Root());
    */
    
    //-----------------------------------------------------------------------------------------------------------------------//
    
    
    //AVL TREES--------------------------------------------------------------------------------------------------------------//
    
    /*
    AVLTree aTree;
    bNode *result = NULL;
    
    double nums[] = {9,8,7,4,3,6,5};
    int n = (sizeof(nums)/sizeof(nums[0]));
    
    for( int x = 0; x < n; x++) {
        result = aTree.addNode(result, nums[x]);
    }
    
    aTree.display(result, 1);
    aTree.PreOrder(result);
     */
    
    //-----------------------------------------------------------------------------------------------------------------------//
    
    
    //Graph with Adjacency List----------------------------------------------------------------------------------------------//
    
    /*
    int Edges[] = {0,1,0,4,1,2,1,3,1,4,2,3,3,4};
    
    int Es = (sizeof(Edges)/(sizeof(Edges[0])));
    
    Graph gph(5);
    
    gph.addEdge(0,1);
    gph.addEdge(0,4);
    gph.addEdge(1,2);
    gph.addEdge(1,3);
    gph.addEdge(1,4);
    gph.addEdge(2,3);
    gph.addEdge(3,4);
    
    cout<<"gph print: "<<endl;
    gph.PrintGraph();
    cout<<endl;
    
    Graph gphA(5);
    gphA.addEdgeArray(Edges, Es);
    
    cout<<"gphA print: "<<endl;
    gphA.PrintGraph();
    cout<<endl;
    */
    
    //-----------------------------------------------------------------------------------------------------------------------//


    exit(0);
}
