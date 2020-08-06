#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n = 0;
    int x = 0, y = 0, z = 0;
    int coordenada = 0;
    cin >> n;
    while(n--){
        cin >> coordenada;
        x += coordenada;
        cin >> coordenada;
        y += coordenada;
        cin >> coordenada;
        z += coordenada;
    }
    if(x == 0 && y == 0 && z== 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}