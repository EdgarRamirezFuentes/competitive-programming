/*
    Problem: A Very Big Sum
    Source: https://www.hackerrank.com/challenges/a-very-big-sum/problem
    Code by: Edgar A. Ramírez Fuentes
*/

long aVeryBigSum(int ar_count, long* ar) {
    long long int result = 0;
    for(int i = 0; i < ar_count; i++){
        result += *(ar + i);
    }
    return result;
}
