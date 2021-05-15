/*
    Problem: 11988 - Broken Keyboard (a.k.a. Beiju Text)
    Source: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3139
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string text;
	list<char> ans;
	auto it = ans.begin();
	while(cin >> text) {
		ans.clear();
		it = ans.begin();
		for(auto i : text) {
			if(i == '[') {
				it = ans.begin();
				continue;
			}

			if(i == ']') {
				it = ans.end();
				continue;
			}
	               	ans.insert(it,i);
		}

		for(it = ans.begin(); it != ans.end(); it++){
			cout << *it;
		}
		cout << endl;
	}
	return 0;
}
