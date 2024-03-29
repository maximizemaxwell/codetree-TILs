#include <iostream>
#include <string>
using namespace std;

class example {
    public:
        string code;
        char meeting_point;
        int time;

        example(string code, char meeting_point, int time){
            this -> code = code;
            this -> meeting_point = meeting_point;
            this -> time = time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char meeting_point;
    int time;

    cin >> code >> meeting_point >> time;

    example example1 = example(code, meeting_point, time);
    cout << "secret code : " << example1.code << "\n";
    cout << "meeting point : " << example1.meeting_point << '\n';
    cout << "time : " << example1.time;
    return 0;
}