class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string newstr = "";
            int n = s.size();
            
            for (int i = 0; i < n; i += k) {
                int sum = 0;
                for (int j = i; j < i + k && j < n; j++) {
                    sum += s[j] - '0';
                }
                newstr += to_string(sum);
            }
            s = newstr;
        }
        return s;
    }
};