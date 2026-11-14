class Solution {
public:
    vector<vector<int>> generate(int n) {
       vector<vector<int>> matrix(n);
       for(int row=0;row<n;row++){
        matrix[row].resize(row+1);
        matrix[row][0]=1;
        matrix[row][row]=1;
        for(int i=1;i<row;i++){
            matrix[row][i]=matrix[row-1][i-1]+matrix[row-1][i];
        }
       } 
       return matrix;
    }
};