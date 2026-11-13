class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto& pair:mp){
            if(pair.second==2){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};