/*
    Problem: Queue using Two Stacks
    Source: https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
using namespace std;
 
void FillQueue(stack<int>& s1, stack<int>& s2) {
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }   
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q = 0; cin>>q;
    int query = 0;
    stack <int> s1; // Our tmp queue.
    stack <int> s2; // Our main queue.
    bool esCola = true;
    while(q--) {
        cin >> query;
        switch(query) {
            case 1:
                cin >> query;
                s1.push(query);
            break;
            case 2:
                if(s2.empty()) {
                    FillQueue(s1, s2);
                }
                s2.pop();
            break;
            case 3:
                if(s2.empty()) {
                    FillQueue(s1, s2);
                }
                cout << s2.top() << endl;
            break;
        }
    }
    return 0;

}
