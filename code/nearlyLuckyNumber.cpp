#include <bits/stdc++.h>
using namespace std;

int main(void){
   unsigned long long int numero = 0;
   int lucky_numbers = 0;
   cin >> numero;
   string string_numero = to_string(numero);
   
   for(int i = 0; i < string_numero.size(); i++){
       if(string_numero[i] == '4' || string_numero[i] == '7'){
           lucky_numbers++;
       } 
   }
   (lucky_numbers == 4 || lucky_numbers == 7) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}