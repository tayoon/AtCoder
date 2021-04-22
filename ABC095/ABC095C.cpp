#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int cost = 0;

    while (min(x, y) > 1) {
        if (a+b > c*2) {
            cost += c * 2;
        } else {
            cost += a + b;
        }
        x -= 1;
        y -= 1;
    }

    while (max(x, y) > 0) {
        if (x > y) {
            if (a > c*2) {
                cost += c * 2;
            } else {
                cost += a;
            }
            x -= 1;
        } else if (x < y) {
            if (b > c*2) {
                cost += c * 2;
            } else {
                cost += b;
            }
            y -= 1;
        } else {
            if (a+b > c*2) {
                cost += c * 2;
            } else {
                cost += a + b;
            }
            x -= 1;
            y -= 1;
        }
    }

    cout << cost << endl;
}