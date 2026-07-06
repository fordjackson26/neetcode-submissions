class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto point = std::find(nums.begin(), nums.end(), target);
        int distance =  std::distance(nums.begin(), point);
        if (distance == nums.size()){
            return -1;
        }
        else return distance;
    }
};
