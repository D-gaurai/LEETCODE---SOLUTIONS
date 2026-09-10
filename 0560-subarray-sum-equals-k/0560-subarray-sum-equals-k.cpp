class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int,int> map;
        map[0]=1;
        int presum=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            presum+= arr[i];
            int remove=presum-k;
            cnt+=map[remove];
            map[presum]+=1;
        }
        return cnt;
        
    }
};