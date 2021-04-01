#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = *max_element(a, a+n) - *min_element(a, a+n);

    cout << res << endl;
}