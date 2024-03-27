#include <iostream>
using namespace std;

bool Contains369(int n) {
    // 계속 10으로 나눠주며
    // 일의 자리를 조사합니다.
    while(n > 0) {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            return true;
        n /= 10;
    }

    return false;
}

// 3, 6, 9를 포함하거나 3의 배수인지를 판단합니다.
bool Is369Number(int n) {
    return Contains369(n) || (n % 3 == 0);
}

int main() {
    // 변수 선언 및 입력:
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i <= b; i++)
        if(Is369Number(i))
            cnt++;

    cout << cnt;
    return 0;
}