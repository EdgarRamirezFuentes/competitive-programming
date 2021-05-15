/*
    Problem: Recursive Digit Sum
    Source: https://www.hackerrank.com/challenges/recursive-digit-sum/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int superDigit(string n, int k) {
    long long valor = 0;
    if(n.length() == 1)
    {
        return stoi(n);
    }

    /* Calcula el nuevo numero */
    for(int i = 0; i < n.length(); i++)
    {
        valor += n[i] - '0'; /* Convierte el char en entero */
    }
    valor *= k; /* Representa el número de veces que se repite el número */
    return superDigit(to_string(valor), 1);
}