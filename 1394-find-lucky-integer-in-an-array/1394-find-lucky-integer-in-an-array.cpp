class Solution {
public:
    int findLucky(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int lucky=-1;
        for(auto &pair:mp){
            int num=pair.first;
            int freq=pair.second;
            if(num==freq){
                lucky=max(num,lucky);
            }
        }
return lucky;
    }
};