class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> returnArr;
        map<int, int> numMap;
        for(int i: nums){
            numMap[i]++;
        }

        vector<pair<int,int>> arr;
        for (auto p: numMap){
            arr.push_back({p.second, p.first});
        }
        std::sort(arr.rbegin(),arr.rend());

        for (int i = 0; i < k; i++){
            returnArr.push_back(arr[i].second);
        }
        return returnArr;
    }
};
