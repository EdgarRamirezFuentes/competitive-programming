/*
    Problem: Plus Minus
    Source: https://www.hackerrank.com/challenges/plus-minus/problem
    Code by: Edgar A. Ramírez Fuentes
*/

void plusMinus(int arr_count, int* arr) {
    double positive = 0;
    double negative = 0;
    double zeros = 0;
    for(int i = 0; i < arr_count; i++){
        if(*(arr + i) == 0){
            zeros++;
        }else if (*(arr + i) > 0) {
            positive++;
        }else{
            negative++;
        }
    }
    printf("%.6f\n", positive/arr_count);
    printf("%.6f\n", negative/arr_count);
    printf("%.6f\n", zeros/arr_count);
}