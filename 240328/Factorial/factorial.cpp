#include <iostream>
using namespace std;

int Fact(int n) {
    if (n == 0) return 1;

    return Fact(n-1) * n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << Fact(N);

    return 0;
}