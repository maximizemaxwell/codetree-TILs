#include <iostream>
using namespace std;

int devidetwo(int *n){
    if (*n%2 == 0) *n /= 2;
    return *n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        cout << devidetwo(&arr[i])<< ' ';
    }
    return 0;
}