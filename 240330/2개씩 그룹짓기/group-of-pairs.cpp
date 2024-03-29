#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int *arr = new int[2 * N];
    for (int i = 0; i <2*N; i++)  cin >> arr[i];
    //최댓값이 가장 작아지도록 분할
    sort(arr, arr + 2 * N);

    int max = arr[0] + arr[2*N-1];
    for(int i = 0; i < N; i++){
        int group = arr[i] + arr[2 * N - 1];
        if (group > max) max = group;
    }
    cout << max;
    
}