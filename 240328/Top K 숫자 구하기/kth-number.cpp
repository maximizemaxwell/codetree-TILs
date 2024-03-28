#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int k, N;
    cin >> N >> k;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) cin >>arr[i];
    sort(arr, arr + N);
    cout << arr[k - 1];
    delete[] arr;
    return 0;
}