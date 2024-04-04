#include <iostream>
#include <string>
using namespace std;

class Bomb {
    public: string code; char color; int time;
    
    Bomb(string code, char color, int time) {
        this->code = code;
        this->color = color;
        this->time = time;
    }
    
};

int main(void) {
    // 여기에 코드를 작성해주세요.
    string code; char color; int time;
    cin >> code >> color >> time;
    Bomb bomb = Bomb(code, color, time);

    cout << "code : " << bomb.code << "\n";
    cout << "color : " << bomb.color << "\n";
    cout << "second : " << bomb.time;
    return 0;
}