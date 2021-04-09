#include <bits/stdc++.h>
using namespace std;

int Digit (int n) {
    int digit = 0;
    while (n > 0) {
        n /= 10;
        digit++;
    }
    return digit;
}

int sumDigit (int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int test = pow(10, Digit(n)-1);

    int res = 0;
    if (n % test > 0) {
        res = n / test + sumDigit(n%test);
    } else if (n % test == 0) {
        if ((n / test) % 2 == 0 || (n / test) == 1) {
            res = sumDigit(n/2) * 2;
        } else {
            res = sumDigit(test) + sumDigit(n-test);
        }
    }

    cout << res << endl;
}