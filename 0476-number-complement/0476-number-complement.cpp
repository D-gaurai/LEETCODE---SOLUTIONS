class Solution {
public:
    int findComplement(int num) {
    long mask=1;
    while(mask<=num){
        mask=mask<<1;
    } 
    return num^(mask-1);
    }
};