class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size()-1;
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int res=nums[n/2];
           if(mp[res]==1){
            return true;
           }
        return false;
    }
};