#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t, a;
    cin >> t >> a;

    int h[n], res;
    double diff;
    double min = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        diff = abs(a - (t-h[i]*0.006));
        if (min > diff) {
            res = i + 1;
            min = diff;
        }
    }

    cout << res << endl;
}