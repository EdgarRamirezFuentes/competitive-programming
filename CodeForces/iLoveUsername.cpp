/*
    Problem: A. I_love_%username%
    Source: https://codeforces.com/contest/155/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int q = 0; cin >> q;
	int points = 0;
	int l = 0;
	int m = 0;
	int aw = 0;
	vector<int> pointsTable;
	
	while(q--) {
		cin>> points;
		pointsTable.push_back(points);
	}

	l = pointsTable[0];
	m = pointsTable[0];

	for(int i = 1; i < pointsTable.size(); i++) {
		if(pointsTable[i] > m) {
			m = pointsTable[i];
			aw++;
			continue;
		}
		if(pointsTable[i] < l) {
			l = pointsTable[i];
			aw++;
		}
	}
	cout << aw<<endl;
	return 0;
}