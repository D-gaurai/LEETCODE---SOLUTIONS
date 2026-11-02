class Solution {
public:
    int trailingZeroes(int n) {
     int count0=0;
    while(n>0){
        count0+=n/5;
        n/=5;
    }  
    return count0; 
    }
};