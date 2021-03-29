#include <iostream>
using namespace std;

int cnt = 0;

int cal(int n) {
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i < n+1; i++){
        if (cal(i) >= a && cal(i) <= b) cnt += i;
    }

    cout << cnt << endl;
}