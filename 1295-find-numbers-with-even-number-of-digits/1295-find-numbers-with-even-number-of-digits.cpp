class Solution {
public:
bool checkevendigit(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    if(count%2==0){
        return true;
    }
    return false;

}
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        for(int i=0;i<n;i++){
            if(checkevendigit(nums[i])==true){
                even++;
            }
        }
        return even;
    }
};