/*
    Problem: Sparse Arrays
    Source: https://www.hackerrank.com/challenges/sparse-arrays/problem
    Code by: Edgar A. Ramírez Fuentes
*/

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string, int> words;
    vector<int> answer;
    for(auto query : queries) {
        words[query] = 0;
    }
    for(auto string : strings) {
        auto it = words.find(string);
        if (it != words.end()) words[string]++;
    }
    for(auto query : queries) {
        answer.push_back(words[query]);
    }
    return answer;
        
}