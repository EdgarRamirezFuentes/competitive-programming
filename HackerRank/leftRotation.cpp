/*
    Problem: Left rotation
    Source: https://www.hackerrank.com/challenges/array-left-rotation/problem
    Code by: Edgar A. Ramírez Fuentes
*/

vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> ans(arr.size());
    for(int i = 0; i < arr.size(); i++) {
        ans[i] = arr[ (d + i) % arr.size()];
    }
    return ans;
}
