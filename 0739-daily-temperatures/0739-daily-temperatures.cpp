class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n);
        stack<int> s;
        
        for(int i=0;i<n;i++){
        while(!s.empty() && temperatures[i]>temperatures[s.top()]){
           int previdx=s.top();
           s.pop();
         ans[previdx]=i-previdx;
        }
         s.push(i);
        }
        return ans;
    }
};