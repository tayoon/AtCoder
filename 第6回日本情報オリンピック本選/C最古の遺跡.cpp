#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    vector<vector<bool>> map(5001, vector<bool>(5001)); 

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        map[y[i]][x[i]] = true;
    }

    int res = 0, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            int dx = x[j] - x[i];
            int dy = y[j] - y[i];

            if (y[i]-dx < 0 || x[i]+dy < 0 || y[j]-dx < 0 || x[j]+dy < 0) continue;
            if (y[i]-dx > 5000 || x[i]+dy > 5000 || y[j]-dx > 5000 || x[j]+dy > 5000) continue;

            if (map[y[i]-dx][x[i]+dy] && map[y[j]-dx][x[j]+dy]) {
                res = dx * dx + dy * dy;
            }
            maxi = max(maxi, res);
        }
    }

    cout << maxi << endl;
}