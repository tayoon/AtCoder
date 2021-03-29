#include <iostream>
#include <string>
using namespace std;

int N;
int A[200];

int main (){
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int cnt = 0;

    while(true){
        bool odd = false;
        for (int i = 0; i < N; i++){
            if (A[i] % 2 != 0) odd = true;
        }

        if (odd) break;

        for (int i = 0; i < N; i++){
            A[i] /= 2;
        }

        ++cnt;
    }

    cout << cnt << endl;
}