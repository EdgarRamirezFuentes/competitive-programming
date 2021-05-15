/*
    Problem: A. Translation
    Source: https://codeforces.com/contest/41/problem/A
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
    string s, t;
    bool answer = true;
    cin >> s >> t;
    for(int i = 0, j = s.size() - 1; i < s.size(); i++, j--) {
        if(s[i] != t[j]) {
            answer = false;
            break;
        }
    }
    cout << (answer ? "YES" : "NO") << endl;
    return 0;
}