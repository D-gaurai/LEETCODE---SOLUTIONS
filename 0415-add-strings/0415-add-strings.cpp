class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum=0;
        int carry=0;
        string ans;
        int i=num1.size()-1;
        int j=num2.size()-1;
        while(i>=0 ||j>=0 || carry>0){
            int s1=0;
            int s2=0;
            if(i>=0){
                s1=num1[i]-'0';
            }
            if(j>=0){
                s2=num2[j]-'0';
            }
            sum=s1+s2+carry;
            carry=sum/10;
            ans+=(sum%10)+'0';
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};