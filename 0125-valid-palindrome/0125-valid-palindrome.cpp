class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.size()-1;
        int left=0;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
            }
            else if(!isalnum(s[right])){
                right--;
            }
            else if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            else{
                right--;
                left++;
            }
        }
        return true;
    }
};