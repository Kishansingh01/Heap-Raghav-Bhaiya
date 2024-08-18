//  1046.  Last Stone Weight

// Question says that if one number is greater than or equal to another number 
// than subtract and find the final output.

class Solution{
public:
        int lastweightofstone(vector<int>&arr){
            priority_queue<int>pq;
            for(int ele:arr){
                pq.push(ele);
            }
            while(pq.size()>1){
                int x=pq.top();
                pq.pop();
                int y=pq.top();
                pq.pop();
                if(x!=y) pq.push(x-y);
            }
            if(pq.size()==1) return pq.top();
            else return 0;
        }};


        By using sorting method 

    class Solution{
    public:
           int lastStoneWeight(vector<int>&arr){
            while(arr.size()>1){
                sort(arr.begin(),arr.end());
                int x=arr[arr.size()-1];
                arr.pop_back();

                int y=arr[arr.size()-1];
                arr.pop_back();
                if(x!=y) arr.push_back(x-y);

            }
            if(arr.size()==1) return arr[0];
            else return 0;
           }
    }