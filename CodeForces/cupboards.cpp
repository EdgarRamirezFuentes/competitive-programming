/*
    Problem: A. Cupboards
    Source: http://codeforces.com/contest/248/problem/A
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    // L counts the 1's on the left column
    // R counts the 0's on the right column
    int l = 0, r = 0;
    cin >> n;
    int col1, col2;
    for(int i = 0; i < n; i++) {
        cin >> col1 >> col2;
        if(col1 == 1) l++;
        if(col2 == 1) r++;
    }
    cout << min(n-l, l) + min(n-r, r) << endl;

    return 0;
}