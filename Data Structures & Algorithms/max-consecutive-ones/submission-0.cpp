class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int curr = 0;
        for(int i : nums){
            if (i == 0){
                max = std::max(curr,max);
                curr = 0;
            }
            else {
                curr++;
            }
        }
        return std::max(curr,max);
    }
};