class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> res;

        for( int i = 0; i <strs.size();i++){
            string a = strs[i];
            string s = a;
            sort(s.begin(), s.end());
            res[s].push_back(a);
        }
       vector<vector<string>> result;
       for (auto& pair : res) {
    result.push_back(pair.second);
}


        return result;
    }
};