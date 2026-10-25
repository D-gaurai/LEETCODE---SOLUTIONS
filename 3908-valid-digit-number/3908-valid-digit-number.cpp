class Solution {
public:
    bool validDigit(int n, int x) {
    string s=  to_string(n);
    char target='0'+x;
      if(s[0]==target){
            return false;
        }
        bool flag=false;
      for(int i=1;i<s.size();i++){
        if(s[i]==target){
            flag=true;
        }
      }  
      if(flag==false){
        return false;
      }
      return true;
    }
};