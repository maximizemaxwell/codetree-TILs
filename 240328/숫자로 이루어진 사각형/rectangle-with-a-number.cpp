#include <iostream>
using namespace std;

void printRect(int N) {
    int num = 1;
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            cout<< num <<" ";
            num++;
            if (num > 9) num = 1;
        }
        cout << endl;
    }
}

int main() {
    // 여기int 에 코드를 작성해주세요.
    int N;
    cin >> N;
    printRect(N);

    return 0;
}