class Solution {
private:
    double helper(double x, long long n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        
        double half = helper(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }

public:
    double myPow(double x, int n) {
        if (x == 1.0) return 1.0;
        if (x == -1.0) {
            return (n % 2 == 0) ? 1.0 : -1.0;
        }

        long long binForm = n;
        bool isNegative = false;
        if (binForm < 0) {
            isNegative = true;
            binForm = -binForm;
        }
        
        double ans = helper(x, binForm);
        return isNegative ? (1.0 / ans) : ans;
    }
};