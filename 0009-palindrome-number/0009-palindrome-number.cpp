class Solution {
public:
    bool isPalindrome(int x) {
        int p = x;
        long long num = 0;
        
        while(p!=0){
            int x = p%10;
            num = num*10 + x;
            p= p/10;
        }
        if(x <0)
        num = num*-1;
        return x==num;
    }
};