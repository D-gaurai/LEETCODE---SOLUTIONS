class Solution {
public:
    int distributeCandies(vector<int>& nums) {
       unordered_map<int,int> mp;
      int n=nums.size();
       for(int num:nums){
        mp[num]++;
       } 
       int candyeat=0;
       int eat=n/2;
       int distinctcandy=mp.size();
       candyeat=min(eat,distinctcandy);
       return candyeat;

    }
};