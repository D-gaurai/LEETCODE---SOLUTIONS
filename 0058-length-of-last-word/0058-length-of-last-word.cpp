class Solution {
public:
    int lengthOfLastWord(string s) {
        int right=s.size()-1;
        
    while(right>=0 && s[right]==' '){
        right--;
    }
    int length=0;
    while(right>=0 && s[right]!=' ' ){
        right--;
        length++;
    }
    return length;
    }
};