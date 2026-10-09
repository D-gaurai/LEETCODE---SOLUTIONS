class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum_s=0;
       int sum_t=0;
       for(char c:s){
        sum_s+=c;
       } 
       for(int c:t){
        sum_t+=c;
       }
       return (char)(sum_t-sum_s);
    }
};