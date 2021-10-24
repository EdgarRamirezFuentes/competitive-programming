/**
 * Problem: Implement an algorithm to determine if a string has all unique characters.
 * Author: EdgarRamirezFuentes
 * Date: October 23rd, 2021
 */

#include <bits/stdc++.h>

/**
 * Check if a string has all unique characters.
 * @param str The string to check.
 * @return True if the string has all unique characters, false otherwise.
 * Time complexity: O(n)
 * Space complexity: O(n)
 */ 
bool is_unique(std::string str) {
    // Add unique chars to a set
    std::unordered_set<char> set;
    for (char c : str) {
        // If the char is already in the set, it means it's not unique
        if (set.find(c) != set.end()) {
            return false;
        }
        // Otherwise, add it to the set to check for duplicates
        set.insert(c);
    }
    // There were no duplicates
    return true;
}