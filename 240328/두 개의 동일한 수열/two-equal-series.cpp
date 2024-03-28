#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    bool fire = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            fire = false;
            break;
        }
    }

    if (fire = true) cout << "Yes";
    else cout << "No";
    

    delete[] a;
    delete[] b;

    return 0;
}