#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    std::sort(a, a+n, std::greater<int>());

    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) Alice += a[i];
        else Bob += a[i];
    }

    cout << Alice - Bob << endl;
}