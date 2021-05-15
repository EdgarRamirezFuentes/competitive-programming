/*
    Problem: A. Cut Ribbon
    Source: http://codeforces.com/contest/189/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

int l;
int v[3]; // a, b, c
int dp[(int)1e5]; // Dynamic programming

int solve(int l) {
    if(l == 0) return 0;
    int ans = -1e9;
    if(dp[l] != -1) return dp[l];
    for(int i = 0; i < 3; i++) {
        if(l - v[i] >= 0) ans = max(ans, 1 + solve(l - v[i]));
    }
    return dp[l] = ans;
}

int main() {
    cin >> l >> v[0] >> v[1] >> v[2];
    memset(dp, -1, sizeof(dp));
    cout << solve(l) << endl;
    return 0;
}
