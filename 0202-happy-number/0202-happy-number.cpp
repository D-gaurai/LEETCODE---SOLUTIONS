class Solution {
public:
int sumsquare(int n){
    int ans=0;
    while(n>0){
        int bnum=n%10;
        ans+=bnum*bnum;
        n=n/10;
    }
    return ans;
}
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=sumsquare(n);
        }
        return n==1;
    }
};