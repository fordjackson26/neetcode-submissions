class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(auto it = arr.begin(); it != arr.end(); it++){
            if(it+1 == arr.end())*it = -1;
            else
            *it = *std::max_element(it+1, arr.end());
        }
        return arr;
    }
};