/*
    Problem: Compare the Triplets
    Source: https://www.hackerrank.com/challenges/compare-the-triplets/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    *(result_count) = 2;
    b_count = 0;
    a_count = 0;
    for(int i = 0; i < 3; i++){
        if(*(a + i) > *(b + i)){
            a_count++;
        }
        if(*(a + i) < *(b + i)){
            b_count++;
        }
      
    }
    static int resultArray[2];
    resultArray[0] = a_count;
    resultArray[1] = b_count;   
    return resultArray;
}