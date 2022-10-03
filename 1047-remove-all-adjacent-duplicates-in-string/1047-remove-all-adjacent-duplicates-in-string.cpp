class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(char ch : s){
            if(!res.empty()&&res[res.size()-1]==ch) res.pop_back();
            // first element else se add hoga direct due to res.empty()
            else
                res += ch;
        }
        return res;
    }
};