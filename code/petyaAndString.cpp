#include <bits/stdc++.h>
using namespace std;
int main(void){
    string a,b; cin >> a >> b;
    for(int i = 0; i < a.size();i++){
        if(tolower(a[i]) > tolower(b[i])){
            cout << 1 << endl;
            return 0;
        }
        if(tolower(a[i]) < tolower(b[i])){
            cout << -1<< endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}