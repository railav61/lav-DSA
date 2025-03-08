class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=0;
        int count=0;
        int result = INT_MAX;
        while(j<blocks.size()){
            if(blocks[j]=='W'){
                count++;
            }
            if(j-i+1 == k){
                result = min(result,count);
                if(blocks[i]=='W'){
                    count -=1;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};