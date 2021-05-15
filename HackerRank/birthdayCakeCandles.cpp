/*
    Problem: Birthday Cake Candles
    Source: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int birthdayCakeCandles(vector<int> ar) {
    /** Se podría mejorar la complejidad del algoritmo utilizando una hash table */
    int maxCandles = 0;
    int maxHeight = 0;
    /* Encuentra la vela más alta */
    for(int i = 0; i < ar.size(); i++)
    {
        if(maxHeight < ar[i])
        {
            maxHeight = ar[i];
        }
    }
    /* Cuentas cuantas velas de la más alta hay */
    for(int i = 0; i < ar.size(); i++)
    {
        if(maxHeight == ar[i])
        {
            maxCandles++;
        }
    }
    return maxCandles;
}