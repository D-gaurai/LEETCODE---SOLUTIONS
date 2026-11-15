class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
       
        for(int i=0;i<k;i++){
            sum+=nums[i];}
             double maxsum=sum;
            for(int j=k;j<n;j++){
               sum=sum-nums[j-k]+nums[j];
               maxsum=max(sum,maxsum);
            }
           
        
        return maxsum/k;
    }
};