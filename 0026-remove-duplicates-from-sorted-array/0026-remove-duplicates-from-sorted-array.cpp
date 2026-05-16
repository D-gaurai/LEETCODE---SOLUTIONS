class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int insertindex=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[insertindex]=nums[i];
                insertindex++;
            }
        }
        return insertindex;
    }
};