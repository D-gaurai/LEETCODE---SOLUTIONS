class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxwater=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
           int width=j-i;
           int currentheight=min(height[i],height[j]);
           int area=width*currentheight;
           maxwater=max(maxwater,area);
           if(height[i]<height[j]){
           i++;}
           else{
            j--;
           }
        }
       return maxwater;
    }
};