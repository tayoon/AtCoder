#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    bool test = false;
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n-i; j++) {
            int k = n - i - j;
            int total = 10000 * i + 5000 * j + 1000 * k;
            if (total == y && k >= 0) {
                test = true;
                break;
            }
        }
        if(test) break;
    }

    if (test) cout << i << " " << j << " " << n-i-j << endl;
    else cout << -1 << " " << -1 << " " << -1 << endl;
}