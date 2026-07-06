class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mapington;
        for(auto num: nums){
            mapington[num] = mapington[num] + 1;
            if(mapington[num]>1) return num;
        }
        return -1;
    }
};
