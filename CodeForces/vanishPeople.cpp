/*
    Problem: A. Vanish People
    Source: https://codeforces.com/gym/272878/problem/A
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> RBTree;
typedef vector<int> vi;
typedef stack<int> si;
typedef queue<int> qi;
typedef list<int> li;
typedef int i;
typedef float f;
typedef long long ll;
typedef pair<int,int> pii;
 
#define pb push_back
#define mp make_pair
#define ook order_of_key
#define fbo find_by_order
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	i cantidad; cin>> cantidad;
	i prefijo; cin >> prefijo;
	vector<string> nombres, prefijos, vivos;
	string nombre;
	bool vive = true;
	unordered_map<string, int> apariciones;
	unordered_map<char, vector<string>> letras;
 
	while(cantidad--) {
		cin >> nombre;
		nombres.pb(nombre);
	}
 
	while(prefijo--) {
		cin >> nombre;
		if(apariciones[nombre] < 1) {
			letras[nombre[0]].pb(nombre);
			apariciones[nombre]++;
		}
	}
 
	for(auto palabra : nombres) {
		vive = true;
		for(int i = 0; i < letras[palabra[0]].size(); i++) {
			if(letras[palabra[0]][i].size() <= palabra.size()) {
				string tmp = palabra.substr(0, letras[palabra[0]][i].size());
				if(tmp == letras[palabra[0]][i]) {
					vive = false;
					break;
				}
			}
		}
 
		if(vive) {
			vivos.pb(palabra);
		}
	}
 
	sort(vivos.begin(), vivos.end());
	cout << vivos.size() << endl;
	for(auto vivo : vivos) {
		cout << vivo << endl;
	}
	return 0;
}