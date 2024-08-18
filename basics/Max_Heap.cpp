
//By default heap will take priority maximum queue

// If we want any data structure where we can get the maximum  or 
// minimum element at any point of time then i will  use priority queues(Heaps)

// TC-> top()=O(1)

// TC-> push(x)->O(logn)

// TC-> Pop->O(logn)

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq; // Maxheap

    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(91);
    pq.push(-9);

    cout<<pq.top()<<endl;//maximum of them
    pq.pop();//delete max of them
    cout<<pq.top(); //maximum of them
   

}
//Here it will print maximum of the queues by in top 