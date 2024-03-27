#include <iostream>
using namespace std;

void printSquare(int n, int m) {
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    printSquare(n,m);
    return 0;
}