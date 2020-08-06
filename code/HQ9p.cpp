#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a; cin >> a;
    for(auto i : a){
        if(i == 'H' || i == 'Q' || i == '9'){
            cout << "YES"<< endl;
            return 0;
        }
    }
    cout << "NO"<< endl;
    return 0;
}