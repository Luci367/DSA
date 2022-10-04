class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // transpose the matrix and then reversing the columns
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j =0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        for(int i =0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
