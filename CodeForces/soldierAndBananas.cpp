/*
    Problem: A. Soldier and Bananas
    Source: https://codeforces.com/contest/546/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int cost_banana = 0;
    int initial_dollars = 0;
    int total_bananas = 0;
    int owe_dollars = 0;
    cin >> cost_banana >> initial_dollars >> total_bananas;
    for(int i = 1; i <= total_bananas; i++){
        owe_dollars += cost_banana * i;
    }
    (owe_dollars > initial_dollars) ? cout << owe_dollars - initial_dollars << endl : cout << 0 << endl;
    return 0;
}