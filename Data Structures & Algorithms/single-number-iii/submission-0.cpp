class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // the two numbers should have some diff bit
        // should be in diff bucket
        // to get diff bit x^y
        int xr = 0;
        for(auto it:nums){
            xr^=it;
        }
        // get last 1 bit in xr
        int k = 1;
        while(true){
            if(xr&k) break;
            k = (k<<1);
        }
        int b1=0, b2=0;
        for(auto it:nums){
            if(it&k) b1 = b1^it;
            else b2 = b2^it;
        }
        return {b1,b2};

    }
};