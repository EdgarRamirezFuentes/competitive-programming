#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n = 0;
    int x = 0;
    string operacion = "";
    cin >> n;
    while(n--){
        cin >> operacion;
        if(operacion[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x << endl;
}