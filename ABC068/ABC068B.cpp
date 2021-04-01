#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    int res = 1;
    for (int i = 1; i <= n; i++){
        int cnt = 0;
        int tmp = i;
        while(tmp%2 == 0) {
            cnt++;
            tmp /= 2;
        }
        if (max < cnt) {
            max = cnt;
            res = i;
        }
    }

    cout << res << endl;
}