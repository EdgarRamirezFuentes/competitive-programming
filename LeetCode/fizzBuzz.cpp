/*
    Problem: Fizz Buzz
    Source: https://leetcode.com/problems/fizz-buzz/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzBuzz;
        int i=1;
        while(i<=n)
        {
            if(!(i%15))
            {
                fizzBuzz.push_back("FizzBuzz");
            }
            else if(!(i%3))
            {
                fizzBuzz.push_back("Fizz");
            }
            else if(!(i%5))
            {
                fizzBuzz.push_back("Buzz");
            }
            else
            {
                fizzBuzz.push_back(to_string(i));
            }
            i++;
        }
        return fizzBuzz;
    }
};