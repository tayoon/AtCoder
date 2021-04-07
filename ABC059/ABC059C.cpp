#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (i%2 == 0 && sum <= 0) {
            res1 += abs(sum) + 1;
            sum = 1;
        } else if (i%2 != 0 && sum >= 0) {
            res1 += sum + 1;
            sum = -1;
        }
    }

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (i%2 == 0 && sum >= 0) {
            res2 += sum + 1;
            sum = -1;
        } else if (i%2 != 0 && sum <= 0) {
            res2 += abs(sum) +1;
            sum = 1;
        }
    }

    cout << min(res1, res2) << endl;
}