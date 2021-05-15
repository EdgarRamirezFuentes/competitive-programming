/*
    Problem: 11340 - Newspaper
    Source: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2315
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long int lli;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	int t; cin >> t;
	while(t--) {
		int k; cin >> k;
		map<char,int> chars;

		string letter; int value;
		while(k--) {
			cin >> letter >> value;
			chars[letter[0]] = value;
		}

		int m; cin >> m;
		string text; getline(cin,text);
		lli money = 0;
		while(m--) {
  			getline (cin, text);
			for(auto i : text) {
				money += chars[i];
			}
		}

		cout << lli(money/100) << ".";
		if(money%100 < 10)
			cout << 0;
		cout << money%100 << "$" << endl;
	}
	
	return 0;
}
