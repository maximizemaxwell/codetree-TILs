#include <iostream>
using namespace std;
void Printstars() {
    for (int i = 0; i < 10; i++){
        cout << "*";
       
    }
     cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 5; i++){
        Printstars();
    }
    return 0;
}