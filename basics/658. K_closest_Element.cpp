  // I have to find closest element till k element.

  class Solution{
    public:
    typedef pair<int,int>pi;//For pair value in 
    vector<int>findfindClosestElements(vector<int>&arr,int k,int x){
        priority_queue<pi>pq; // maxheaap(max size is k)
        for(int ele:arr){
            int distance=abs(x-ele);
            pq.push({distance,ele});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
  }
