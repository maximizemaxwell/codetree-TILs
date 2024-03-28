#include <iostream>
using namespace std;

int sumN(int N) {
    if (N == 1) return 1;
    return sumN(N - 1) + N;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << sumN(n);
    return 0;
}