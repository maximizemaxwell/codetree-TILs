#include <iostream>
using namespace std;

class Agent {
    public: char codename; int score;

    Agent(char codename = 'A', int score = 100) {
        this->codename = codename;
        this->score = score;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Agent agent[5];
    char codename; int score;
    int some;
    int min = 100;
    for (int i = 0; i < 5; i++) {
        cin >> codename >> score;
        agent[i] = Agent(codename, score);
        if (min > agent[i].score) {
            min = agent[i].score;
            some = i;
        }
    }
    cout << agent[some].codename << " " << agent[some].score;

    return 0;
}