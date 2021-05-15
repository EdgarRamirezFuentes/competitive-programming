/*
    Problem: Diagonal Difference
    Source: https://www.hackerrank.com/challenges/diagonal-difference/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int diagonalDifference(vector<vector<int>> arr) {
    int valor = 0; /* Diagonal izq/der */
    for(int i = 0; i < arr.size(); i++)
    {
        valor += (arr[i][i] - arr[arr.size() - i - 1][i]);
    }
    return abs(valor);
}