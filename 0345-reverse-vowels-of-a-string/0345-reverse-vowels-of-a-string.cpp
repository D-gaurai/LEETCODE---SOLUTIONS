class Solution {
public:
bool isvowel(char c){
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isvowel(s[left])){
                left++;
            }
            else if(!isvowel(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                right--;
                left++;
            }
        }
        return s;
    }
};