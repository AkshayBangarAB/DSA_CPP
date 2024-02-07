class Solution {
public:
    string removeOccurrences(string s, string part) {

        int pos = s.find(part);
        while(pos!= string:: npos){
            s.erase(pos, part.length());
            pos = s.find(part);
        }
        return s;

        // Second Solution
        // string ans = "";
        // for (int i = 0; i < s.length(); ++i) {
        //     ans.push_back(s[i]);
        //     if (ans.length() >= part.length() && ans.substr(ans.length() - part.length()) == part) {
        //         ans.erase(ans.length() - part.length());
        //     }
        // }
        // return ans;
    }
};
