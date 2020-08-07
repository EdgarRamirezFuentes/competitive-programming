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

// First pair is the coordinates and the second pair storages the side-adjacent light coordinates of the first coordinates.
int grid[3][3];
int game[3][3] = {1,1,1,1,1,1,1,1,1};

// Right, Left, Down, Up, Right-down 
vector<pair<int, int> >  coordinates = {mp(0,0), mp(1,0), mp(-1,0), mp(0,1), mp(0,-1)};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Filling the grid
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }
    // Pressing the buttons
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(grid[i][j] != 0 && grid[i][j] % 2 != 0) {    
                for(auto coordinate : coordinates) {
                    if(i + coordinate.first > 2 || i + coordinate.first < 0 || j + coordinate.second > 2 || j + coordinate.second < 0) continue;
                    game[i + coordinate.first][j + coordinate.second] ^= 1;
                }
            }
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << game[i][j];
        }
        cout << endl;
    }
    return 0;
}
