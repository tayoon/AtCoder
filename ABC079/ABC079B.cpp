#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long num[n+1];
    num[0] = 2;
    num[1] = 1;

    for (int i = 2; i <= n; i++) {
        num[i] = num[i-1] + num[i-2];
    }

    cout << num[n] << endl;
}