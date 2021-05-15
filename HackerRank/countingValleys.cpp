/*
    Problem: Counting valleys
    Source: https://www.hackerrank.com/challenges/counting-valleys/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int countingValleys(int steps, string path) {
    long int level = 0;
    unsigned int valleys = 0;
    for( auto& step : path) {
        step == 'D' && !level ? valleys++ : valleys += 0;
        step == 'D' ? level-- : level++;
    }
    return valleys;
}