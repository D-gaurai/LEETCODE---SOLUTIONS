class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
       int length=0;
       for(int i=0;i<arr.size();i++){
        if(arr[i]%2!=0){
            length++;
            if(length==3){
                return true;
            }
        }
        else{
            length=0;
        }
       } 
      
      return false;
    }
};