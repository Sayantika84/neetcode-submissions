class Solution {
public:
    bool isvalid(char c){
        return (c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9');
    }
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1,n=s.size();
        while(l<r){
            while(l<r && !isvalid(s[l])) l++;
            while(r>l && !isvalid(s[r])) r--;
            if(l<r && tolower(s[l])!=tolower(s[r])) return false;
            l++; r--;
        }
        return true;
    }
};
