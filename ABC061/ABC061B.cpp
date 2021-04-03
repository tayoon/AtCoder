#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a, b;
    int cnt[n] = {};
    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        for (int j = 1; j <= n; j++) {
            if (a == j) {
                cnt[j-1]++;
                break;
            }
        }
        for (int k = 1; k <= n; k++) {
            if (b == k) {
                cnt[k-1]++;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << cnt[i] << endl;
    }
}