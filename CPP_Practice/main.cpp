//
//  main.cpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/5/16.
//
//

#include <iostream>
#include "quicksort.hpp"
#include "insertionsort.hpp"
#include "selection_sort.hpp"
#include "TopDownMergeSort.hpp"
#include "BottomUpMergeSort.hpp"
#include "node.hpp"
#include "binary_tree.hpp"
#include "bNode.hpp"
#include "AVLTree.hpp"



using namespace std;

void Preorder(Node* node){
    if ( node )
    {
        cout << node->getValue() << " ";
        Preorder(node->Left());
        Preorder(node->Right());
    }
}


int main() {
    
    //ARRAY SORTS------------------------------------------------------------------------------------------------------------//
    
    /*VARIABLES*/
    int arr[] = {3,7,8,5,2,1,9,5,4};
    int s = (sizeof(arr)/sizeof(arr[0])); //size of array in bites divided by size of element in bites gives you size.
    //Working array for sorts that are not in place. Must be same size as original array.
    int B[s];
    
    /*SORTS*/
    //QuickSort(arr,0,s);
    //InsertionSort(arr, s);
    //SelectionSort(arr, s);
    //TopDownMergeSort(arr, B, s);
    //BottomUpMergeSort(arr,B,s);
    
    
    /*Print function */
    /*
    for (int i = 0; i < s ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    
    //-----------------------------------------------------------------------------------------------------------------------//
    
    
    //BASIC BINARY TREE CREATION, TRAVERSAL, etc.----------------------------------------------------------------------------//
    
    /*
    BTree bTree;
    double nums[] = {9,8,7,4,3,6,5};
    int n = (sizeof(nums)/sizeof(nums[0]));
    
    for( int x = 0; x < n; x++) {
        bTree.addNode(nums[x]);
    }
    
    bTree.PostOrder(bTree.Root());
    */
    //-----------------------------------------------------------------------------------------------------------------------//
    
    
    //AVL TREES--------------------------------------------------------------------------------------------------------------//
    
    AVLTree aTree;
    bNode *result = NULL;
    
    double nums[] = {9,8,7,4,3,6,5};
    int n = (sizeof(nums)/sizeof(nums[0]));
    
    for( int x = 0; x < n; x++) {
        result = aTree.addNode(result, nums[x]);
    }
    
    //aTree.display(result, 1);
    //aTree.PreOrder(result);
    //-----------------------------------------------------------------------------------------------------------------------//
    
}
