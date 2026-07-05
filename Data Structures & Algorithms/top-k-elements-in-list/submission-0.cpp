class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }

        // max freq : n
        int n = nums.size();
        vector<vector<int>> fn(n+1);
        for(auto it:mp){
            fn[it.second].push_back(it.first);
        }

        vector<int> ans;
        for(int i=n; i>=0; i--){
            if(fn[i].size()>0){
                for(auto it:fn[i]){
                    ans.push_back(it);
                    if(ans.size()==k) return ans;
                }
            }
        }
        return ans;

    }
};
