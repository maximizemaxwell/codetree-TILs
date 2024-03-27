#include <iostream>
using namespace std;

void PrinstLines(int n) {
    for (int i = 0; i < n; i++) {
        cout << "12345^&*()_";
        cout <<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrinstLines(n);
    return 0;
}