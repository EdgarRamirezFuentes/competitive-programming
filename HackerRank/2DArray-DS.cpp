/*
    Problem: 2D Array - DS
    Source: https://www.hackerrank.com/challenges/2d-array/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = INT_MIN;
    int possible_sum = 0;
    size_t s1 = arr.size(), s2 = arr[0].size();
    for(int i = 0; i + 2 < s1; i++) {
        for(int j = 0; j + 2 < s2; j++) {
            possible_sum =  arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                            arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1]
                            + arr[i+2][j+2];
            max_sum = max(max_sum, possible_sum);
        }
    }
    return max_sum;
}