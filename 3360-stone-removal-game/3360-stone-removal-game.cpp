class Solution {
public:
    bool canAliceWin(int n) {
        int removecount=10;
        int turns=0;
        while(n>=removecount && removecount>0){
            n-=removecount;
            removecount--;
            turns++;
        }
        return turns%2==1;
    }
};