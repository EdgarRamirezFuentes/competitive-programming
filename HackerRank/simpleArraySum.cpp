/*
    Problem: Simple Array Sum
    Source: https://www.hackerrank.com/challenges/simple-array-sum/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
     int sum = 0;
     for(int i = 0; i < ar.size(); i++)
     {
         sum += ar[i];
     }
     return sum;
}