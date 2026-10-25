class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num=x;
        int ans=0;
        while(x!=0){
            int rem=x%10;
            ans+=rem;
            x=x/10;
        }
        if(num%ans==0){
            return ans;
        }
        return -1;
    }
};