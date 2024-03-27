#include <iostream>
using namespace std;

bool isYoon(int year) {
    if (year%100 ==0 && year %400 !=0) return false;
    else if (year %4 ==0) return true;
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    if (isYoon(y)) cout << "true";
    else cout << "false";
    return 0;
}