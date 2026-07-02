class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int resLen = 1, resStart=0, l, r;
        for(int i=0; i<n; i++){
            // check if s[i] is the center
            l = i, r = i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(resLen<r-l+1){
                    resLen = r-l+1;
                    resStart = l;
                }
                l--; r++;
            }

            //check if s[i] & s[i+1] is the centre
            l = i, r = i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(resLen<r-l+1){
                    resLen = r-l+1;
                    resStart = l;
                }
                l--; r++;
            }
        }
        return s.substr(resStart, resLen);
    }
};
                   