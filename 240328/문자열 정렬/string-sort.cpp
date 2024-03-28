#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}