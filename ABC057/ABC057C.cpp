#include <bits/stdc++.h>
using namespace std;

int Digit (int n) {
    int digit = 0;
    while (n > 0) {
        n /= 10;
        digit++;
    }
    return digit;
}

int Compare (int a, int b) {
    int res_a = Digit(a);
    int res_b = Digit(b);
    cout << "res_a:" << res_a << "*res_b:" << res_b << endl;

    return max(res_a, res_b);
}

int main() {
    long n;
    cin >> n;
    
    int num = 0;
    int data[100000] = {};
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            data[num] = i;
            num++;
        }
    }

    int min = INT_MAX;
    for (int i = 0; i < num; i++) {
        long anoth = n / data[i];
        cout << "i:" << i << " " << data[i] << ":" << anoth << endl;
        
        int res = Compare(data[i], anoth);
        if (res < min) {
            min = res;
            cout << data[i] << ":" << anoth << "---min ver---" << " compare:" << min << endl;
        }
    }

    cout << min << endl;
}



/*
 * output
 * 9876543210
1:9876543210
res_a:1*res_b:10
1:9876543210---min ver--- compare:10
2:4938271605
res_a:1*res_b:9
2:4938271605---min ver--- compare:9
3:3292181070
res_a:1*res_b:0
3:3292181070---min ver--- compare:1
5:1975308642
res_a:1*res_b:10
*/