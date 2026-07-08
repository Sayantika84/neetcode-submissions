class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // maintain sliding window of unique chars

        int l=0, res=0;
        int n = s.size();
        unordered_map<int,int> mp;
        for(int r=0; r<n; r++){
            if(mp.count(s[r])){
                l = max(l,mp[s[r]]+1);
            }
            mp[s[r]] = r;
            res = max(res, r-l+1);
        }

        return res;
    }
};
