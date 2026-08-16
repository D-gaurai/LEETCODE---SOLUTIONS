class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cookiesindex=0;
        int childindex=0;
        while(childindex<g.size() && cookiesindex<s.size()){
            if(s[cookiesindex]>=g[childindex]){
                childindex++;
            }
            cookiesindex++;
        }
        return childindex;
    }
};