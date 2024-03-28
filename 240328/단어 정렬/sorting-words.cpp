#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}