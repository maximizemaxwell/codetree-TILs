#include <iostream>
using namespace std;

void func1(int N) {
    if (N == 0) return;

    func1(N - 1);

    cout << N << ' ';
}

void func2(int N) {
    if (N == 0) return;

    cout << N << ' ';

    func2(N - 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    func1(N);
    cout << endl;
    func2(N);
    return 0;
}