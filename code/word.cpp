#include <bits/stdc++.h>
using namespace std;
void lowerFunction(string& palabra);
void upperFunction(string& palabra);
int main(void){
    string palabra = "";
    cin >> palabra;
    int lower = 0;
    int upper = 0;
    for(auto i : palabra){
        (islower(i)) ? lower++ : upper++;
    }
    (lower >= upper) ? lowerFunction(palabra) : upperFunction(palabra);
    cout << palabra << endl;
    return 0;
}

void lowerFunction(string& palabra){
    for(auto& i : palabra){
        i = tolower(i);
    }
}

void upperFunction(string& palabra){
    for(auto& i : palabra){
        i = toupper(i);
    }
}