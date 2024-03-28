#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int arr[MAX_N];

// a번째 까지 인덱스의 숫자 중에 가장 큰 값을 반환합니다.
int MaxValue(int a) {
    if(a == 0)
        return arr[0];

    return max(MaxValue(a - 1), arr[a]);
}

int main() {
    // 변수 선언 및 입력:
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << MaxValue(n - 1);

    return 0;
}