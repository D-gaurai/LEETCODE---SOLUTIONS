class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int target=mp[s[0]];
        for(auto &p:mp){
            if(p.second!=target){
                return false;
            }
        }
        return true;
    }
};