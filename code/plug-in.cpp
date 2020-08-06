#include<bits/stdc++.h>
using namespace std;


int main(void) {
	string word = ""; cin>>word;
	stack<char> letters;
	stack<char> tmp;
	// El primer int del pair checa las apariciones y el segundo el indice de la última aparición.
	for(auto letter : word) {
		if(letters.empty() || letter != letters.top()) {
			letters.push(letter);
			continue;
		}else{
			letters.pop();
		}
	}
	while(!letters.empty()) {
		tmp.push(letters.top());
		letters.pop();
	}
	while(!tmp.empty()) {
		cout << tmp.top();
		tmp.pop();
	}
	return 0;
}