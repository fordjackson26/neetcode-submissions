class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        set<int> numSet(nums.begin(), nums.end());
        int max = 1; 
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            int current = nums[i];
            while(numSet.count(current)){
                current++;
                count++;
            }
            if(count > max){
                max = count;
            }


        }
        return max;
    }
};
