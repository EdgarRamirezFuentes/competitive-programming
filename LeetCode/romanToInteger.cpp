/*
    Problem: Roman to integer
    Source: https://leetcode.com/problems/roman-to-integer/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int romanToInt(string s) {
        int integer = 0; /* Almacena el número total. */
        /* Almacena el número que está una posición después del actual */
        int prevNumber = 0;             
        for(int i = s.size() - 1; i > -1; i--){
            if(getValue(s[i]) >= prevNumber){
                integer = integer + getValue(s[i]);
                prevNumber = getValue(s[i]);
            }else {
                integer = integer - getValue(s[i]);
            }
        }
        return integer;
    }
    int getValue(char n){
        switch(n){
            case 'I':
                return 1;
            break;
            case 'V':
                return 5;
            break;
            case 'X':
                return 10;
            break;
            case 'L':
                return 50;
            break;
            case 'C':
                return 100;
            break;
            case 'D':
                return 500;
            break;
            case 'M':
                return 1000;
            break;
            default:
                return 0;
            break;
        }
    }
};