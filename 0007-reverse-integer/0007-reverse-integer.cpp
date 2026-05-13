class Solution 
{
public:
long ans=0;
    int reverse(int x) {
        while(x!=0){
        int rem=0; 
        rem=x%10;
        x/=10;



        ans=ans*10+rem;
        if(ans>INT_MAX||ans<INT_MIN){
            return 0;
        }
        
    }
return ans;}

    
};