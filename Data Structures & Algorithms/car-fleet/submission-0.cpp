class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pair;
        int n=position.size();
        for(int i=0;i<n;i++)
        {
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        vector<double>time;

        for(auto &p:pair)
        {
            time.push_back((double)(target-p.first)/p.second);
            int n=time.size();
            if(n>=2 && time[n-1]<=time[n-2])
            {
                time.pop_back();
            }

        }
        return time.size();

        
    }
};
