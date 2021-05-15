/*
    Problem: 10935 - Throwing cards away I
    Source: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1876
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int main() {
	short n; cin>>n;
	short lastCard = 0;
	while(n != 0) {
		queue<int> cards;
		for(int i = 1; i <= n; i++) {
			cards.push(i);
		}
		cout << "Discarded cards:";
		while(cards.size() > 1) {
			cout << " " << cards.front();
			cards.pop();
			if(cards.size() == 1){
				break;
			}else {
				cout << ",";
			}
			cards.push(cards.front());
			cards.pop();
		}
		cout << endl << "Remaining card: " << cards.front() << endl;
		cards.pop();
		cin >> n;
	}
	return 0;
	
}
