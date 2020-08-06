#include <bits/stdc++.h>
using namespace std;

int main(void){
    string kids = "";
    int n = 0;
    int t = 0;
    cin >> n;
    cin >> t;
    cin >> kids;
    while(t--){
        for(int i = 0; i < (n - 1); i++){
            if(kids[i] == 'B' && kids[i+1] == 'G'){
                kids[i] = 'G';
                kids[i+1] = 'B';
                i++; /* Como ya se intercambió ese chico, lo saltamos */
            }
        }
    }
    cout << kids << endl;
    return 0;
}