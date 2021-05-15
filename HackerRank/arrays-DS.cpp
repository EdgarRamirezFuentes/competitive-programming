/*
    Problem: Arrays - DS
    Source: https://www.hackerrank.com/challenges/arrays-ds/problem
    Code by: Edgar A. Ramírez Fuentes
*/

vector<int> reverseArray(vector<int> a) {
    int size = a.size();
    for(int i = 0; i < size / 2; i++) {
        int aux = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = aux;
    }
    return a;
}