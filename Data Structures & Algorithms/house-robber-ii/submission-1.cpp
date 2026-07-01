class Solution {
public:
    int solve(vector<int>& nums, int i, int j){
        int n = j-i+1;
        if(n==1) return nums[i];
        int prev2 = nums[i];
        int prev1 = max(nums[i],nums[i+1]);
        if(n==2) return prev1;
        int curr = prev1;
        for(int k = i+2; k<=j; k++){
            curr = max(prev1, prev2+nums[k]);
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        return max(solve(nums,0,n-2),solve(nums,1,n-1));
    }
};
