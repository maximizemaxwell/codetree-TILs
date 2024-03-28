#include <iostream>
using namespace std;


void func1(int N) {
    if (N == 0) return;
    cout << N << ' ';
    func1(N - 1);
    cout << N << ' ';
    
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    func1(N);
    return 0;
}