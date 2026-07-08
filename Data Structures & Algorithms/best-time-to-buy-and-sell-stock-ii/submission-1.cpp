class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int n = prices.size();
        if(n==1) return 0;
        int ans = 0;
        for(int i=1; i<n; i++){
            if(prices[i]>mini){
                ans+=(prices[i]-mini);
                mini = prices[i];
            }
            cout<<ans<<endl;
            mini = min(mini, prices[i]);
        }
        return ans;
    }
};