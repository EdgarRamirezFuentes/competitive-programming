/*
    Problem: A. Favorite Sequence
    Source: http://codeforces.com/contest/1462/problem/A
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
#define endl "\n";

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 0, n = 0;
    vector<long long int> s;
    cin >> t;
    while(t--) {
        cin>>n;
        s.resize(n);
        for(auto& a : s) {
            cin >> a;
        }
        int l=0, r= n-1;
        while(l <= n/2 && l <= r) {
            cout << s[l] << " ";
            if(l != r) {
                cout << s[r] << " ";
            }
            l++;
            r--;
        }
        cout << endl;
    }
    return 0;
}