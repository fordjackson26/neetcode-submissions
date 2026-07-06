class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = *std::max_element(piles.begin(), piles.end());
        int res = max;
        while (min <= max){
            int k = (min + max)/2;
            int total = 0;
            for(int p: piles){
                total+= ceil((double)p /k);
            }
            if (total <= h){
                res = k;
                max = k -1;
            }
            else { 
                min = k+ 1;
            }
        }
        return res;

    }
};
