#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool samestring(int n, string s1, string s2){
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i] || s1.length() != s2.length()) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.


    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n = s1.length();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (samestring(n, s1, s2)) cout << "Yes";
    else cout << "No";
    
    
    return 0;
}