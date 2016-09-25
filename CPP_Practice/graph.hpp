//
//  graph.hpp
//  CPP_Practice
//
//  Created by Annelise Tsueda on 9/25/16.
//  sources:
//      http://www.sanfoundry.com/cpp-program-implement-adjacency-list/
//      http://www.geeksforgeeks.org/graph-and-its-representations/
//

#ifndef graph_hpp
#define graph_hpp

#include <stdio.h>
#include <iostream>
#include "AdjList.hpp"

using namespace std;

class Graph {
private:
    int V;
    AdjList *array;
    
public:
    Graph(int V) {
        this->V = V;
        array = new AdjList[V];
        for (int i = 0; i < V; ++i) {
            array[i].head = NULL;
        }
    }
    
    //Creates new node
    GNode *newAdjNode(int dest) {
        GNode *newNode = new GNode(dest);
        return newNode;
    }
    
    //Adds an edge to the graph
    void addEdge(int src, int dest) {
        GNode *NewNode = new GNode(dest);
        NewNode->SetNext(array[src].head);
        array[src].head = NewNode;
        
        NewNode = new GNode(src);
        NewNode->SetNext(array[dest].head);
        array[dest].head = NewNode;
    }
    
    
    //will take an array of integers use two indeces at a time to create an edge in the graph.
    void addEdgeArray(int A[], int n) {
        for (int i = 0; i < n; i = i+2) {
            this->addEdge(A[i], A[i+1]);
        }
    }
    
    
    //Prints the graph.
    void PrintGraph() {
        int v;
        for (v = 0; v < V; ++v) {
            GNode* pCrawl = array[v].head;
            cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
            while (pCrawl) {
                cout<<"-> "<<pCrawl->getDest();
                pCrawl = pCrawl->Next();
            }
            cout<<endl;
        }
    }

};

#endif /* graph_hpp */
