/*
    Problem: Equal stacks
    Source: https://www.hackerrank.com/challenges/equal-stacks/problem
    Code by: Edgar A. Ramírez Fuentes
*/

void getHeight(const vector<int>& pila, int& h) {
    for(auto i : pila) {
        h += i;
    }
}

void nivelar(const vector<int>& s, int& h, int& g, int& m) {
    while(h > m) {
        if(g >= s.size()) break;
        h -= s[g];
        g++;
    }
    m = min(m,h);
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int height1 = 0;
    int height2 = 0;
    int height3 = 0;
    int menor = 0;
    int g1 = 0, g2 = 0, g3= 0; // Checan el índice actual de la pila.

    getHeight(h1, height1);
    getHeight(h2, height2);
    getHeight(h3, height3);

    menor = height1;

    while(height1 != height2 || height2 != height3) {
        if(height1 != menor) {
            nivelar(h1, height1, g1, menor);
        }
        if(height2 != menor) {
            nivelar(h2, height2, g2, menor);
        }
        if(height3 != menor) {
            nivelar(h3, height3, g3, menor);
        }
    }
    return menor;
}