class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        if(n==1) return 1;
        for(int i=0; i<n-1; i++){
            int len = 1;
            while(i+1<n && nums[i]+1==nums[i+1]){
                len++;
                i++;
                while(i+1<n && nums[i]==nums[i+1]) i++;
            }
            cout<<i<<len<<endl;
            ans = max(len,ans);
        }
        return ans;
    }
};
