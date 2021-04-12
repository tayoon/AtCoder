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

int main() {
    long long n;
    cin >> n;
    
    int mini = INT_MAX;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            mini = min(mini, max(Digit(i), Digit(n/i)));
        }
    }

    cout << mini << endl;
}