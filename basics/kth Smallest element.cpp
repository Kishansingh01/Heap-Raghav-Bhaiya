// Q.. Find the kth smallest element in a given array 

// arr={10,20,-4,6,18,24,105,118} k=3
// Ans (10)

// Method-1: sort, arr[k-1]  TC=o(nlogn) SC=o(logn)

// Bubble sort   TC=(kn)

// Selection Sort=  T.c=O(k*n)  S.C=O(1)

// Quick select algorithm= TC=O(n)

// Heap TC=O(n.logk)


//   By using max heap

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={10,-29,30,54,65,87,-89};
    int k=4;
    int n=sizeof(arr)/4;
    priority_queue<int>pq; //maxheap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();

}

// TC=O(nlogk)        SC=O(n)

// Auxilary Space = Extra space used(Since priority queue size is K)
//  so AS=O(k)