/*
    Problem: A. Way Too Long Words
    Source: https://codeforces.com/contest/71/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	string s;
	while(n--){
		cin >> s;
		(s.size()>10)? cout<< s[0] << s.size() -2 <<s[s.size()-1]<<endl : cout << s<<endl;
	}
}