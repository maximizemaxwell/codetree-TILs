#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int arr[20][20];

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    int max = 0;

    for (int i = 0; i <= n-3; i ++) {
        for (int j = 0; j<=n-3; j++) {
            sum = 0;
            for (int k = i; k < i+3; k++){
                for (int h = j; h < j+3; h++) {
                    sum += arr[k][h];
                }
            }
            if (sum > max) max = sum;
        }
    }
    printf("%d", max);
    return 0;
}