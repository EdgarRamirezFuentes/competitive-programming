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

vector<int>  primeNumbers {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,100000000};

bool binarySearch(const int& x, const int& m) {
   int front = 0;
   int back = primeNumbers.size() - 1;
   int middle = 0; 
   while(back >= front) {
        middle = front + ( (back - front ) / 2);
        if(primeNumbers[middle] == x) {
            if(primeNumbers[middle + 1] == m) {
                return true;
            }else{
                return false;
            }
        }
        if(primeNumbers[middle] < x) {
            front = middle + 1;
        }else {
            back = middle - 1;   
        }
   }
   return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m; 
    cin >> n >> m;
    if(binarySearch(n,m)) {
        cout <<"YES" << endl;
    }else {
        cout << "NO" <<endl;
    }
    return 0;
}
