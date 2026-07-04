class Solution {
public:
    int countDigitOne(int n) {
        if(n<=0) return 0;
        long long count=0;
        for(long long i=1;i<=n;i*=10){
            long long left=n/(i*10);
            long long curr=(n/i)%10;
            long long right=n%i;
            if(curr==0){
                count+=left*i;
            }
            else if(curr==1){
                count+=left*i+ right+1;
            }
            else{
                count+=(left+1)*i;
            }
        }
        return count;
    }
};