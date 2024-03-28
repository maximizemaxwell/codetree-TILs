#include <iostream>
using namespace std;

int pow(int N) {
    if (N < 10) return N*N;

    int ten  = (N % 10);
    return pow(N/10) + ten*ten;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << pow(n);
    return 0;
}