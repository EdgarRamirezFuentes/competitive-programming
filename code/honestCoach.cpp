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
	i t; cin >> t;
	i n;

	while(t--) {
		cin >> n;
		vi s(n);
		i ans = INT_MAX;
		for(int i = 0; i < n; i++) {
			cin >> s[i];
		}
		sort(s.begin(), s.end());
		for(int j = n-1; j > 0; j--) {
			ans = min(ans, s[j] - s[j-1]);
		}
		cout <<ans<< endl;
	}
	return 0;
}