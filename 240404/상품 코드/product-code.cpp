#include <iostream>
#include <string>
using namespace std;

class Some{
    public: string name; int code;

    Some(string name = "codetree", int code = 50){
        this->name = name;
        this->code = code;
    }
};

int main(void) {
    // 여기에 코드를 작성해주세요.
    Some some1 = Some();
    string name2; int code2;
    cin >> name2 >> code2;
    Some some2 = Some(name2, code2);

    cout << "product " << some1.code << " is " << some1.name << '\n';
    cout << "product " << some2.code << " is " << some2.name << '\n';


    return 0;
}