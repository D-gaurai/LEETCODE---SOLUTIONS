class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m+n;
      vector<int> arr(x);
        for(int i=0;i<m;i++){
            arr[i]=nums1[i];
        }
        for(int j=0;j<n;j++){
            arr[m+j]=nums2[j];
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<x;i++){
            nums1[i]=arr[i];
        }
        
    }
};