class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // n is used for storing rows and column size
        int n = matrix.size();
        
        //for transpose of matrix
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<i ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //for reversing the row
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    
    }
};
