class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> counts;
        for(int i = 0; i < nums.size(); i++){
            counts[nums[i]] = i;
        }

         for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(counts.count(diff) && counts[diff] != i ) {
                return {i, counts[diff]};
            }
         }

        return {};
    }
};
