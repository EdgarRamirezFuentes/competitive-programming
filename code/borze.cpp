#include <bits/stdc++.h>
using namespace std;

int main(void){
    string borze = "";
    cin >> borze;
    for(int i = 0; i < borze.size(); i++){
        if(borze[i] == '.'){
            cout << 0;
        }else{
            if(borze[i] == '-' && borze[i+1] == '-'){
                cout << 2;
            }else{
                cout << 1;
            }       
            i++;
        }
    }
    cout <<endl;
    return 0;
}