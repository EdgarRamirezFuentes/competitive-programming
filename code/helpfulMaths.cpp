#include <bits/stdc++.h>

using namespace std;

int main(void){
	string suma = "";
	cin >> suma;
	int tmp = 0;
	vector<char> numeros;
	for(int i = 0; i < suma.size(); i++){
		if(i % 2 == 0){
			numeros.push_back(suma[i]);
		}
	}
	for (int i = 0; i < numeros.size() - 1; i += 1)
    	{
    		for (int j = 0; j < numeros.size() - 1; j += 1)
		{
	 		if (numeros[j] > numeros[j+1])
	    		{
	     		 	tmp = numeros[j];
	      			numeros[j] = numeros[j+1];
	      			numeros[j+1] = tmp;
	    		}
		}
    	}

	for(int j = 0; j < numeros.size(); j++){
		cout << numeros [j];
		if(j < numeros.size() - 1) {
			cout << "+";
		}	
	}
	return 0;
}