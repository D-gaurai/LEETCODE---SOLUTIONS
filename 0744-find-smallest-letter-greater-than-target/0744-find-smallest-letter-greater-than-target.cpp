class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
        int low=0;
        int high=s.size()-1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(s[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return s[ans];
    }
};