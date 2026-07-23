class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int a=0,b=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[a]=nums[i];
                a+=2;
            }
            else{
                ans[b]=nums[i];
                b+=2;
            }
        }
        return ans;
    }
};