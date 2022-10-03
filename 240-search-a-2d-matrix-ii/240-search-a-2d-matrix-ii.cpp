class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // we start from top rightmost element
        int row = matrix.size();
        int col = matrix[0].size();
        int r =0;
        int c = col-1;
        while(r<row && c>=0){
            int element = matrix[r][c];
            if(element == target) return 1;
            else if(element < target)
       // element is lower than target so target cant be in the sorted row         
                r++; 
            else
        // element is higher than target so it cant be in increasing sorted column
                c--;
        }
        return 0;
    
        
    }
};