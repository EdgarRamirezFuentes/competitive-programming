/*
    Problem: A. Arrival of the General
    Source: http://codeforces.com/contest/144/problem/A
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
    cin >> n;
    int mini, maxi;
    vector<int> soldiers(n);
    for(auto& i : soldiers) {
        cin >> i;
    }
    mini = 0;
    maxi = 0;
    for(int i = 1; i < n; i++) {
        if(soldiers[i] > soldiers[maxi]) {
            maxi = i;
        }
        if(soldiers[i] <= soldiers[mini]) {
            mini = i;
        }
    }
    if(maxi > mini) mini++;
    cout << maxi + (n-1-mini) << endl;
    return 0;
}