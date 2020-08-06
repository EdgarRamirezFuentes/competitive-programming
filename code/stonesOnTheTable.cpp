#include <bits/stdc++.h>

using namespace std;

int main() {
	int numberStones = 0; cin>>numberStones;
	string stones = ""; cin >> stones;
	int minimumStones = 0;
	for(int i = 0; i < numberStones; i++) {
		if(stones[i] == stones[i+1]) minimumStones++;
	}
	cout << minimumStones << endl;
}