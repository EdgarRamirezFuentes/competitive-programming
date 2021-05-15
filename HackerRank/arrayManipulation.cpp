/*
    Problem: Array Manipulation
    Source: https://www.hackerrank.com/challenges/crush/problem
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;
long long ans[10000001];
int main() {
	long a, b, m, n, k;
	memset(ans,0,sizeof(ans));
	long long maxN = 0;
	cin >> n >> m;
	while(m--) {
		cin >> a >> b >> k;
		ans[a] += k;
		if(b + 1 <= n) {
			ans[b+1] -= k;	
		}
	}
	for(int i = 1; i <= n; i++) {
		ans[i] += ans[i-1];
		maxN = max(ans[i], maxN);
	}
	cout << maxN;
	return 0;
}