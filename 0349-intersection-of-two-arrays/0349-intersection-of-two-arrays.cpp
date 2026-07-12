class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int left=0;
        int right=0;
        vector<int> result;
        while(left<nums1.size() && right<nums2.size()){
            if(nums1[left]==nums2[right]){
                if(result.empty() || result.back()!=nums1[left]){
                    result.push_back(nums1[left]);
                }
                left++;
                right++;
            }
            else if(nums1[left]<nums2[right]){
                left++;
            }
            else{
                right++;
            }
        }
        return result;

         
    }
};