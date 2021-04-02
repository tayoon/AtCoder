#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a, num[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a;
        num[a-1]++;
    }

    int cnt = 0, res = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] > 0) cnt++;
    }

    std::sort(num, num+n);

    for (int i = 0; i < n; i++) {
        if (cnt <= k) break;
        else if (num[i] == 0) continue;
        else {
            res += num[i];
            cnt--;
        }
    }

    cout << res << endl;
}