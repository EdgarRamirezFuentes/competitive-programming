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

vector<int> v1, v2;
int n;
bool firstVectorBigger () {
    for(int i = 0; i  < n; i++) {
        if(v1[i] <= v2[i] ) return false;
    }
    return true;
} 

bool secondVectorBigger() {
    for(int i = 0; i  < n; i++) {
        if(v1[i] >= v2[i] ) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    v1.resize(n);
    v2.resize(n);
    
    for(auto& i : v1) {
        cin >> i;
    }

    for(auto& i : v2) {
        cin>>i;
    }

    int respuesta = (v1[0] > v2[0] ? firstVectorBigger() : secondVectorBigger());
    cout << respuesta << endl;
    return 0;
}