class Solution {
public:
int countbits(int x){
    int count=0;
    while(x>0){
        x&=(x-1);
        count++;
    }
    return count;
}
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
       vector<pair<int,int>> temp;
       for(int i=0;i<n;i++){
        int bits=countbits(arr[i]);
        temp.push_back({bits,arr[i]});
       }
       sort(temp.begin(),temp.end());
       for(int i=0;i<n;i++){
        arr[i]=temp[i].second;
       }
       return arr;
    }
};