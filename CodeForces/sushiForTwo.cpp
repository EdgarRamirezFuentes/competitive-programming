/*
    Problem: A. Sushi for Two
    Source: https://codeforces.com/contest/1138/problem/A
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
vector<int> s;
int ap[2];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    int c = -1;
    int ans = 2;
    int l = 0, r = 1;
    int minimo;
    cin >> n;
    s.resize(n, 0);
    for(auto& i : s) {
        cin >> i;
    }
    ap[ s[l] - 1 ]++;
    while(r < n) {
        ap[ s[r] - 1 ]++;
        // Acabo una serie de sushi con un lado de alga y otro atún
        if(( s[l] == s[r] || r + 1 == n) && c != -1 ) {
            // Tomamos el mínimo de apariciones y lo multiplicamos por 
            // 2 para obtener el mínimo arreglo que podemos obtener.
            int minimo;
            if(r + 1 == n) {
                minimo = min(ap[0], ap[1]) * 2;
            }else {
                if(s[r] == 1) {
                minimo = min(ap[0] - 1 , ap[1]) * 2;
                }else { 
                    minimo = min(ap[0], ap[1] - 1) * 2;
                }
            }
            ans = max(ans, minimo);
            // Recorremos el izquierdo hasta donde hubo un cambio para 
            // Iniciar el nuevo ciclo
            while(l < c) {
                ap[ s[l] - 1 ]--;
                l++;
            }
            c = r;
        }
        // Actualizamos el índice donde hubo cambio
        if(s[l] != s[r] && (ap[ s[r] - 1  ]) == 1)  {
            c = r;
        } 
        r++;
    }
    cout << ans << endl;
    return 0;
}