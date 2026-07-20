class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long fmax=LLONG_MIN;
        long long smax=LLONG_MIN;
        long long tmax=LLONG_MIN;
        for(int num:nums){
            if(num==fmax || num==smax || num==tmax){
                continue;
            }

            if(num>fmax){
                tmax=smax;
                smax=fmax;
                fmax=num;
            }
            else if(num >smax){
                tmax=smax;
                smax=num;
            }
            else if(num>tmax){
                tmax=num;

            }

        }
        if(tmax ==LLONG_MIN){
            tmax=fmax;
        }
        return tmax;
    }
};