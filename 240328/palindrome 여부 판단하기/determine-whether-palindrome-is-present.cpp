#include <iostream>
using namespace std;

bool Palin(string &s) {
    for (int i= 0; i < (int)s.size(); i++) {
        if (s[i] != s[(int)s.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    if (Palin(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}