class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        int l = 0;
        int m = 1;
        int r = 1;
        for (int i = 2; i < n; i++){
            int temp = r;
            
            r = r + l + m;
            l = m;
            m = temp;

            

        }
        return r;
    }
};