#include <bits/stdc++.h>
using namespace std;

int binary(int bina) {
  int res = 0, i = 0;
  while (bina > 0) {
    res = res + (bina % 2) * pow(10, i);
    bina = bina / 2;
    i++;
  }
  return res;
}

int main() {
  int a, b;
  cin >> a >> b;

  a = binary(a);
  b = binary(b);

  int c = 0, n = 0;
  while (a > 0 || b > 0) {
    if (a % 10 == b % 10) {
      c = c + 0;
    } else {
      c = c + pow(2, n);
    }
    n++;
    a /= 10;
    b /= 10;
  }

  cout << c << endl;
}