class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int num:nums1){
            mp[num]++;
        }
        for(int i=0;i<nums2.size();i++){
            int num=nums2[i];
            if(mp[num]>0){
                mp[num]--;
                ans.push_back(num);
            }
        }
        return ans;
    }
};