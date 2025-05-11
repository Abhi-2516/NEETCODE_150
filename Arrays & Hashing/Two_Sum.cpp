class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> ans;
       for(int i = 0; i <nums.size();i++){
        int d =  target - nums[i];
        if(ans.find(d)!=ans.end()){
         return {ans[d], i};
            }
            ans.insert({nums[i], i});
       }
       return {};

    }
};