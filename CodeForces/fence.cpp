/*
    Problem: B. Fence
    Source: http://codeforces.com/contest/363/problem/B
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  unsigned long long int n, k, answer = 0;
  cin >> n >> k;
  unsigned long long int planks[n];
  for(auto& i : planks) {
    cin >> i;
  }
  unsigned long long int  l = 0, r = 0, sum = 0, aux = ULLONG_MAX;
  while (l < n-k) {
    // Sumar las primeras k pranks.
    if(r < l + k) {
      sum += planks[r];
    }else {
      sum -= planks[l];
      l++;
      sum += planks[r];
    }
    if(sum < aux &&  r == l + k-1) {
      answer = l;
      aux = sum;
    }
    r++;
  }
  cout << answer + 1 << endl;
  return 0;
}
