class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
         unordered_set<int> seen;
        for(auto &it:mp){
            int freq=it.second;
            if(seen.count(freq)){
                return false;
            }
            seen.insert(freq);
        }
        return true;
    }
};