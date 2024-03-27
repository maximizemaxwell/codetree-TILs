#include <iostream>
using namespace std;

int devideTen(int sum){
    return sum/10;
}

void Printnum(int N){
    int sum = 0;
    for (int i = 1; i <= N; i++){
        sum += i;
    }
    cout << devideTen(sum);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    Printnum(N);
    return 0;
}