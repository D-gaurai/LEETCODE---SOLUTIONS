class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int total_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int> distinctelements;
            for(int j=i;j<n;++j){
                distinctelements.insert(nums[j]);
                int count=distinctelements.size();
                total_sum+=count*count;
            }
        }
        return total_sum;
    }
};