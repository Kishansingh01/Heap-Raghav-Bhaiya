// //   Sort a " K " sorted array (Sort a nearly sorted array)

// // arr={10,2,3,4,3,76,32,565,12} k=4
 
// //  means in the array nearest till 4 position left or right  the sorted order will be there 

 
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     int arr[]={6,5,4,32,45,56,90};
//     int k=3;
//     int n=sizeof(arr)/4;
//     priority_queue<int,vector<int>,greater<int>>pq;
//     vector<int>ans;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size()>k){
//             ans.push_back(pq.top());
//             pq.pop();
//         }
//     }
//     while(pq.size()>0){
//         ans.push_back(pq.top());
//         pq.pop();
//     }
//     for(int i=0;i<ans.size();i++){{
//         cout<<ans[i]<<" ";
//     }}
//     cout<<pq.top();
// }

// or   

//   Sort a " K " sorted array (Sort a nearly sorted array)

// arr={10,2,3,4,3,76,32,565,12} k=4
 
//  means in the array nearest till 4 position left or right  the sorted order will be there 

 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,5,4,32,45,56,90};
    int k=3;
    int n=sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>>pq;
    int idx=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[idx++]=pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        arr[idx++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++){{
        cout<<arr[i]<<" ";
    }}
    cout<<endl;
}

