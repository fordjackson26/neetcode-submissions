class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> numset(nums.begin(), nums.end());
        
        return !(numset.size() == nums.size());
    }
};