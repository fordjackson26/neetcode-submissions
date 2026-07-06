class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int product = 1;
        int zero = 0;
        for(const auto i: nums){
            if ( i != 0){
            product = product * i;
            } else {
                zero++;
            }
        }
        if (zero > 1){
            for(int i = 0; i < nums.size(); i++){
                res.push_back(0);
            }
            return res;
        }
        for (const auto c: nums){
            if (!zero){
                res.push_back(product/c);
            }
            else {
                if (c!= 0){
                    res.push_back(0);
                }
                else {
                    res.push_back(product);
                }
            }
        }
        return res;
    }
};
