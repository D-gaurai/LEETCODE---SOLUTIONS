class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int current_max=nums[0];
    int current_min=nums[0];
    int max_product=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<0){
            swap(current_max,current_min);
        }
        current_max=max(nums[i],nums[i]*current_max);
        current_min=min(nums[i],nums[i]*current_min);
        max_product=max(max_product,current_max);
    }

     return max_product;
    }
};