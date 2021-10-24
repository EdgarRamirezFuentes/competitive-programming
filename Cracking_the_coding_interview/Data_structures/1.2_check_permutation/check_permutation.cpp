/**
 * Problem: Given two strings, write a method to decide if one is a permutation of the other.
 * Author: EdgarRamirezFuentes
 * Date: October 23rd, 2021
 */

#include <bits/stdc++.h>

bool check_permutation(std::string s1, std::string s2) {
    // Strings of different sizes cannot be permutations
    if (s1.size() != s2.size()) {return false;}
    std::unordered_map<char, int> ap;
    for (char c : s1) {
        // Increasing the appearances of the current char by one
        ap[c] += 1;
    }
    // Decrementing the character apperances of 2 in the count of s1
    // If a character in s2 is not registered automatically is not a permutation
    // If the current value of ap[c] is 0, it means that s2 has more appearances of that character than s1
    // zeros keep track of those characters that have the same quantity of appearances in s1 and s2
    int zeros = 0;
    for (char c : s2) {
        // Character not registered or it has more appearances in s2 than s1
        if (ap[c] == 0) {return false;}
        ap[c] -= 1;
        if  (ap[c] == 0) {zeros += 1;}
    }
    // If zeros anf the size of ap are the same, it  means that s1 and s2 have the same characters
    return (zeros == ap.size());
}