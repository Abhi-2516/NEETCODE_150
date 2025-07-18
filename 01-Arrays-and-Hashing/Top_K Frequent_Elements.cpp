class Solution {
public:

    static bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> res;
         for (int i = 0; i < nums.size(); i++) {
            res[nums[i]]++;
        }
        vector<pair<int,int>> resvec(res.begin(),res.end());

          sort(resvec.begin(), resvec.end(), compare);

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(resvec[i].first);
        }

        return result;
    }
};