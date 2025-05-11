class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char , int> st;
        unordered_map<char , int> tt;
        for(int i = 0; i<s.length();i++){
            st[s[i]]++;
            tt[t[i]]++;
        }
        return st == tt;
    }
};