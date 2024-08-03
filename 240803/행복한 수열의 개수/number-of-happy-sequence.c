#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int happy = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 0; j < n-1; j++) {
            if (arr[i][j] == arr[i][j+1]) cnt++;
            if (cnt >= m) {
                happy++;
                break;
            }
        } 
    }

    for (int i = 0; i < n-1; i++) {
        int cnt = 1;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == arr[i-1][j]) cnt++;
            if (cnt >= m) {
                happy++;
                break;
            }
        }
    }

    printf("%d", happy);
    return 0;
}