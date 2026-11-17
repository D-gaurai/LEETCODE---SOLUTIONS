class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       for(int num:nums){
        mp[num]++;
       } 
       int sum=0;
for(auto &pair:mp){
    int num=pair.first;
    int freq=pair.second;
    if(freq%k==0){
        sum+=num*freq;
    }
}
return sum;
    }
};