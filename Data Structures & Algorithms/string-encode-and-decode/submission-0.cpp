class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto s : strs){
            ans+= (to_string(s.size())+"#"+s);
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        int n = s.size();
        vector<string> ans;
        string num = "";
        while(i<n){
            num = "";
            while(s[i]!='#'){
                num.push_back(s[i]);
                i++;
            }
            i++;
            int sz = stoi(num);
            ans.push_back(s.substr(i,sz));
            i+=sz;
            
        }
        return ans;
    }
};
