#include <bits/stdc++.h>
using namespace std;

int main(void){
    int matrix[5][5];
    int row = 0;
    int column = 0;
    for(int i = 0; i < 5; i++){
        if(row != 0 && column != 0){
            break;
        }
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                row = i + 1;
                column = j + 1;
            }
        }
    }
    (row > 3) ? row = row - 3 : row = 3 - row;
    (column > 3) ? column = column - 3 : column = 3 - column;
    cout << row + column << endl;
    return 0;
}