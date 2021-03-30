#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[100];
    
    for (int i = 0; i < n; i++){
        cin >> d[i];
    }

    std::sort(d, d+n, std::greater<int>());

    int cnt = 1;
    for (int i = 0; i < n-1; i++){
        if (d[i] > d[i+1]) cnt++;
    }

    cout << cnt << endl;
}