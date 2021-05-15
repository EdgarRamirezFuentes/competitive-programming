/*
    Problem: A. Display The Number
    Source: http://codeforces.com/contest/1295/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include<bits/stdc++.h>

using namespace std;

int main () {
  	int t; cin >> t;
  	while (t--) {
      	int n; cin >> n;
      	int digits1 = n / 2;
      	if (n % 2 == 1) {
	  		cout << 7;
	  		for (int i = 1; i < digits1; i++) {
	      		cout << 1;
	    	}
		}
      	else {
	   		for (int i = 0; i < digits1; i++) {
	      		cout << 1;
	    	}
		}
      	cout << endl;
    }
  	return 0;
}