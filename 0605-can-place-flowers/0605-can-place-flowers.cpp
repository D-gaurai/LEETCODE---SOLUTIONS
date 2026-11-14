class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                bool leftempty=(i==0||nums[i-1]==0);
                bool rightempty=(i==nums.size()-1 || nums[i+1]==0);
                if(leftempty && rightempty){
                    nums[i]=1;
                    n--;
                }
            }
        }
       return n<=0;
    }
};