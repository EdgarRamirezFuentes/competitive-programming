/*
    Problem: Range Sum Query 2D - Immutable
    Source: https://leetcode.com/problems/range-sum-query-2d-immutable/
    Code by: Edgar A. Ramírez Fuentes
*/

class NumMatrix {
public:
    vector< vector<int> > prefix_sum;
    NumMatrix(vector<vector<int>>& matrix) {
        long long int sum = 0;
        for(int i = 0; i < matrix.size(); i++) {
            sum = 0;
            for(int j = 0; j < matrix[0].size(); j++) {
                sum += matrix[i][j];
                matrix[i][j] = sum;
            }
        } 
        this -> prefix_sum = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long int answer = 0;
        long long int a = 0;
        long long int b = 0;
        for(int x = row1; x <= row2; x++) {
            a = this -> prefix_sum[x][col2];
            b = ( !col1 ? 0 : this -> prefix_sum[x][col1-1] );
            answer +=  a - b ; 
        }
        return answer;
    }
};
