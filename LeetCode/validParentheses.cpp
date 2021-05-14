/*
    Problem: Valid Parentheses
    Source: https://leetcode.com/problems/valid-parentheses/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool isValid(string s) { 
        stack<char> pila;
        for(auto i : s){
            switch(i){

                case '(':
                    pila.push(i);
                break;

                case '{':
                    pila.push(i);
                break;

                case '[':
                    pila.push(i);
                break;

                case ')':
                    if(pila.size() == 0){
                        return false;
                    }
                    if(pila.top() == '('){
                        pila.pop();
                    }else{
                        return false;
                    }
                break;

                case '}':
                    if(pila.size() == 0){
                        return false;
                    }
                    if(pila.top() == '{'){
                        pila.pop();
                    }else{
                        return false;
                    }
                break;

                case ']':
                    if(pila.size() == 0){
                        return false;
                    }
                    if(pila.top() == '['){
                        pila.pop();
                    }else{
                        return false;
                    }
                break;
            }
        }    
        if(pila.size() == 0){
            return true;
        }else{
            return false;
        }
        return false;
    }
};