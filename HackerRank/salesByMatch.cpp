/*
    Problem: Sales by match
    Source: https://www.hackerrank.com/challenges/sock-merchant/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int sockMerchant(int n, vector<int> ar) {
    int answer = 0;
    unordered_map<unsigned int, unsigned int> pairs;
    for (auto& sock : ar) {
        pairs[sock]++;
        if(pairs[sock] % 2 == 0) answer++;
    }
    return answer;
}