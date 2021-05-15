/*
    Problem: Minimum Height Triangle
    Source: https://www.hackerrank.com/challenges/lowest-triangle/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int lowestTriangle(int base, int area){
    // Complete this function
    float height = 2 * (float)area / (float)base;
    return ceil(height);
}