class Solution {
public:
    int reverse(int x) {
        long long absx = abs((long long)x);
        if(x==0)
        return 0;
        int sign = 1;
        long long rev =0;
        if(x<0){
            sign = -1;
        }

        while(absx>0){
            int mod = absx%10;
            rev = rev*10 + mod;
            if(rev>INT_MAX){
                return 0;
            }
            absx /= 10;
        }
        rev = rev * sign;
        return rev;
    }
};