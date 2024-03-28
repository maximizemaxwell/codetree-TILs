#include <iostream>
using namespace std;

void func1(int n) {
    if (n == 0) return;

    func1(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "*" ;
    }
    cout << endl;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    func1(n);
    return 0;
}