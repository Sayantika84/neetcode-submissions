class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> open = {'(', '{', '['};
        set<char> close = {')', '}', ']'};
        for(auto c:s){
            if(open.count(c)) st.push(c);
            else if(!st.empty()){
                if(c==')' && st.top()!='(') return false;
                else if(c=='}' && st.top()!='{') return false;
                else if(c==']' && st.top()!='[') return false;
                else st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};
