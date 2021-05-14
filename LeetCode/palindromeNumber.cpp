/*
    Problem: Palindrome Number
    Source: https://leetcode.com/problems/palindrome-number/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool isPalindrome(int x) { 
        //Time complexity: O(n)
        // Space complexity: O(n)
        unsigned long long copy = x;
        queue<int> number;
        unsigned long long position = 0;
        if(x < 0) return false;
        while(copy) { // O(n)
            number.push(copy % 10);
            copy /= 10;
        }
        // X is 0 or a one digit number
        if(number.size() == 1 || number.size() == 0 ) return true; 
        position = pow(10, number.size() - 1);
        while(!number.empty()) { // O(n)
            copy += number.front() * position;
            position /= 10;
            number.pop();
        }
        cout << copy << endl;
        return (x == copy) ? true : false;
    }
};