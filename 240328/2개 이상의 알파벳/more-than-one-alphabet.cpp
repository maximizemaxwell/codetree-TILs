#include <iostream>
using namespace std;

bool isTwo(string s) {
    for (int i = 0; i < (int)s.size(); i++){
        for (int k = i+1; k < (int)s.size(); k++){
            if (s[i] != s[k]) return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    if (isTwo(A)) cout << "Yes";
    else cout <<"No";
    return 0;
}