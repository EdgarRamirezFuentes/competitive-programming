/*
    Problem: Maximum element
    Source: https://www.hackerrank.com/challenges/maximum-element/problem
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int times = 0;
    int query = 0;
    stack<int> numbers;
    stack<int> maximum_numbers;
    cin >> times;
    while(times--){
        cin >> query;
        switch(query) {
            case 1 :
                cin >> query;
                if(maximum_numbers.empty() || query >= maximum_numbers.top()) {
                    maximum_numbers.push(query);
                }
                numbers.push(query);
            break;
            case 2 :
                if(numbers.top() == maximum_numbers.top()) {
                    maximum_numbers.pop();
                } 
                numbers.pop();
            break;
            case 3: 
                cout << maximum_numbers.top() << endl;
            break;
        }
    }
    return 0;
}
