/*
   Problem: A. Word Capitalization
   Source: https://codeforces.com/contest/281/problem/A
   Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
   string cadena = "";
   cin >> cadena;
   cadena[0] = toupper(cadena[0]);
   cout << cadena << endl;
   return 0;
}