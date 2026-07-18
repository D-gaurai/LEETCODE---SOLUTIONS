class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int candidate=nums[n/2];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==candidate){
                count++;
            }
        }
        if(count>n/2){
            return candidate;
        }
        return -1;
        
    }
};