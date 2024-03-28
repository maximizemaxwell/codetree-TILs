#include <iostream>
using namespace std;

void printHello(int N) {
    if (N == 0) return;

    printHello(N-1);
    cout <<"HelloWorld" << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    printHello(N);
    return 0;
}