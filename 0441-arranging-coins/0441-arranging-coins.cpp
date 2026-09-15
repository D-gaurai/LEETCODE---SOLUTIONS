class Solution {
public:
    int arrangeCoins(int n) {
  long left=0,right=n;
  while(left<=right){
    long mid=left+(right-left)/2;
    long coin_needed=mid*(mid+1)/2;
    if(coin_needed==n){
        return (int)mid;
    }
    else if(coin_needed<n){
        left=mid+1;
    }
    else{
        right=mid-1;
    }
  }
  return int(right);
    }
};