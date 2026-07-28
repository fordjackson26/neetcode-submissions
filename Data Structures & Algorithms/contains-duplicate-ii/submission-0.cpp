class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> dups;
        int l = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i - l > k){
                dups.erase(nums[l]);
                l++;
            }
            if(dups.find(nums[i])!= dups.end()){
                return true;
            }
            dups.insert(nums[i]);

        }
        return false;
        
    }
};