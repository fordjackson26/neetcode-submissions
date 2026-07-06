class Solution {
public:
    int maxArea(vector<int>& heights) {
        auto st = heights.begin();
        auto en = heights.end()-1;
        int max =0;
        while(en>st){
            int area = std::distance(st,en)*std::min(*st, *en);
            max = std::max(area, max);
            if(*en<*st){
                en--;
            }
            else {
                st++;
            }
        }
        return max;
        
    }
};
