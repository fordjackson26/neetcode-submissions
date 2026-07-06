class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i =0; i < numbers.size(); i++){
            auto it = std::find(numbers.begin(), numbers.end(), target-numbers[i]);
            if (it != numbers.end()){
                return {i+1, std::distance(numbers.begin(),it)+1};
            }
        }
    }
};
