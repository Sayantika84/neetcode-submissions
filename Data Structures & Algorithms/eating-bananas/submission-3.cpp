class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int k){
        long long hour=0;
        for(auto it: piles){
            hour+=ceil(double(it)/k);
        }
        return hour<=h;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(),piles.end());
        int ans;
        while(l<=r){
            int k = l + (r-l)/2;
            if(canFinish(piles,h,k)){
                ans = k;
                r = k-1;
            }
            else{
                l = k+1;
            }
        }
        return ans;
    }
};
