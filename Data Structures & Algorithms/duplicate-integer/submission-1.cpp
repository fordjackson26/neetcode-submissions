class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n2(nums.begin(), nums.end());
        return !(n2.size() == nums.size());
    }
};