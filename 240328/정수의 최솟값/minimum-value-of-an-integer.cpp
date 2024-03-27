#include <iostream>
using namespace std;

int Minimum(int a, int b, int c) {
    int min;
    if (a >= b) {
        if (b >= c) min = c;
        else min = b;}
    if (b >= a) {
        if (a >= c) min = c;
        else min = a;
    }
    return min;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int result = Minimum(a, b, c);
    cout << result;
    return 0;
}