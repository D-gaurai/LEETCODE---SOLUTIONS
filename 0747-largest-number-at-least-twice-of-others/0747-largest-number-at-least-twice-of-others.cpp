class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int n=nums.size();
       int max_no=INT_MIN;
       int ans;
       for(int i=0;i<n;i++){
        if(nums[i]>max_no){
            max_no=nums[i];
            ans=i;
        }
       }
       for(int i=0;i<n;i++){
        if(nums[i]!=max_no && nums[i]*2>max_no){
            return -1;
        }
       }
       return ans;
    }
};