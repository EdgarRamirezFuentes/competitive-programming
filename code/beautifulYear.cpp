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
    int year; cin >> year;
    unordered_map<int,int> r;
    int copy; // Helps to split up the year.
    bool found = false; // Checks if the year was found
    year++;
    while(true) {
        if(found) break;
        r.clear();
        copy = year;
        while(copy) {
            if(r[copy % 10] > 0) {
                break; // There's a repeated digit
            }
            r[copy % 10]++;
            copy /= 10;
            if(!copy) found = true;
        }
        if(!found) year++;
    }
    cout << year << endl;
    return 0;
}
