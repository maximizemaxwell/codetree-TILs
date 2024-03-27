#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << ' ' << *b << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    swap(&a,&b);
    return 0;
}