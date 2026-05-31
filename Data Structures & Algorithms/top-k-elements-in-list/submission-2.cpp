class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>>maxHeap;
        for(auto &x:mpp)
        {
            maxHeap.push({x.second,x.first});
        }

        vector<int>ans;
        int i=0;
        while(i<k)
        {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
            i++;

        }
        return ans;




        
    }
};
