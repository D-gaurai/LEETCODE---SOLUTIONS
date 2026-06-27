class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zerocount++;
            }
        }
        int count =0;
        for(int i=n-zerocount;i<n;i++){
            if(nums[i]!=0){
                count++;
            }
        }
        return count;
    }
};