class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest=nums[0];
        for(int x:nums){
            if(abs(x)<abs(closest)){
                closest=x;
            }
            else if(abs(x)==abs(closest)){
                closest=max(closest,x);
            }
            
        
        }
        return closest;
    }
};