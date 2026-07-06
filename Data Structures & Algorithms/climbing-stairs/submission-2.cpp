class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 0){
            return n;
        }
        int i = 1;
        int j = 1;
       
        for(int c = 0; c < n - 1; c++){
            int temp = i;
            i = j + i;
            j = temp;
        }
        return i;
    }
};
