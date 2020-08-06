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
	i cases; cin >> cases;
	string l;
	int letters[26];
	bool fake = false;
	cin.ignore();
	while(cases--) {
		getline(cin,l);
		fake = false;
		memset(letters, 0, sizeof(letters));
		
		for(int i = 0; i < l.size(); i++) {
			l[i] = tolower(l[i]);
		}

		for(auto i : l) {
			if(i >= 97 && i <= 122){
				letters[i - 97]++;
			}
		}

		for(auto letter : letters) {
			if(letter < 1) {
				cout << "How cute, such a prankster" << endl;
				fake = true;
				break;
			}
		}
		if(!fake) {
			cout << "I expel you PAZUZU" << endl;
		}
	}

	return 0;
}