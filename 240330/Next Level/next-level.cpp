#include <iostream>
#include <string>
using namespace std;

class User {
    public: 
        string id;
        int level;

        User(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;
    cin >> id >> level;
    User user;
    cout << "user " << user.id << " lv " << user.level << '\n';
    user.id = id;
    user.level = level;
    cout << "user " << user.id << " lv " << user.level << '\n';
    return 0;
}