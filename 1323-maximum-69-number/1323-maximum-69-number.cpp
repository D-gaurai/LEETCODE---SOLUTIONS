class Solution {
public:
    int maximum69Number (int num) {
        std::string numstr = std::to_string(num);
        for(int i=0;i<numstr.size();i++){
            if(numstr[i]=='6'){
                numstr[i]='9';
                break;
            }
        }
        return std::stoi(numstr);
    }
};