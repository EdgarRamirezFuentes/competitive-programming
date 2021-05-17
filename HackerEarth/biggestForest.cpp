/*
    Problem: Biggest forest
    Source: https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/biggest-forest-700592dd/
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>

using namespace std;

// Up, Right, Down and Left
int movR[4] = {-1, 0, 1, 0}; 
int movC[4] = {0, 1, 0, -1};
int maxSize = -1e9;

int getForestSize(int row, int column, vector< vector<char> >& field) {
    queue <int> columns;
    queue <int> rows;
    columns.push(column);
    rows.push(row);
    int forestSize = 1;
    field[row][column] = 'W';
    while (!(columns.empty())) {
        int currentR = rows.front();
        int currentC = columns.front();
        rows.pop();
        columns.pop();
        // Check if it has adjancent trees
        for (int i = 0 ; i < 4 ; i++) {
            int adjacentR = currentR + movR[i];
            int adjacentC = currentC + movC[i];
            if ( (adjacentR > -1 && adjacentR < field.size()) && (adjacentC > -1 && adjacentC < field.size()) && field[adjacentR][adjacentC] == 'T') {
                field[adjacentR][adjacentC] = 'W';
                rows.push(adjacentR);
                columns.push(adjacentC);
                forestSize++;
            }
        
        }   
    } 
    return forestSize;
}

int main(void) {
    int n; 
    cin >> n;
    vector<vector<char>> field(n, vector<char>(n));
    for (auto& row : field) {
        for (auto& column : row) {
            cin >> column;
        }
    }

    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (field[i][j] == 'T') {
                maxSize = max(maxSize, getForestSize(i, j, field));
            }
        }
    }
    cout << maxSize << endl;
    return 0;
}
