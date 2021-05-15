/*
    Problem: A. Amusing Joke
    Source: http://codeforces.com/contest/141/problem/A
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
    string s1,s2,s3;
    bool ans = true;
    unordered_map<char,int> letters;
    cin >> s1 >> s2 >> s3;
    for(auto& i : s1) {
        letters[i]++;
    }
    for(auto& i : s2) {
        letters[i]++;
    }
    for(auto& i : s3) {
        letters[i]--;
    }
    for(auto& i : letters) {
        if(i.second != 0) {
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}