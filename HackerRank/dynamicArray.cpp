/*
    Problem: Dynamic array
    Source: https://www.hackerrank.com/challenges/dynamic-array/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int getIndex(const int& x, const int& lastAnswer, const int& n) {
    return (x ^ lastAnswer) % n;
}

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> sequences(n);
    vector<int> ans;
    int lastAnswer = 0;
    int query, x, y;
    for(auto& q : queries) {
        query = q[0];
        x = q[1];
        y = q[2];
        int index = getIndex(x, lastAnswer, n);
        cout << "q: " << query << " x " << x << " y " << y << " idx " << endl;
        switch(query) {
            case 1:
                sequences[index].push_back(y);
                break;
            case 2:
                size_t size = sequences[index].size();
                lastAnswer = sequences[index][y % size];
                ans.push_back(lastAnswer);
                break;
        }
    }
    return ans;
}