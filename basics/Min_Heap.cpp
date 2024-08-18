
//Minimum heap print minimum of all the queue

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int> >pq;
    pq.push(10);
    pq.push(-20);
    pq.push(-10);
    pq.push(20);
    cout<<pq.top()<<endl;//-20
    pq.pop();
    cout<<pq.top();//-10
}  