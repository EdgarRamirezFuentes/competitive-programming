#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s; cin >> s;
    bool existe = false;
    int contador = 0;
    for(int i = 0; i < s.size(); i++){
        existe = false;
        for(int j = i - 1; j > -1; j--){
            if(s[i] == s[j]){
                existe = true;
                break;
            }

        }
        if(!existe){
            contador++;
        }
    }
    if(contador%2==0){
        cout << "CHAT WITH HER!" <<endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}