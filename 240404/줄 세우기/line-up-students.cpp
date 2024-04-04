#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
    public: int height, weight, num;

    Student(int height, int weight, int num) {
        this->height = height;
        this->weight = weight;
        this->num = num;
    }
    bool operator<(const Student & other) const{
        if(height != other.height) return height> other.height;
        if (weight != other.weight) return weight > other.weight;
        return num < other.num;
    }
    friend ostream& operator << (ostream& os, const Student& student) {
        os << student.height << ' ' << student.weight << ' ' << student.num << '\n';
        return os;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int height, weight, num;

    vector<Student> students;

    for (int i = 0; i < n; i++) {
        num = i + 1;
        cin >> height >> weight;
        students.emplace_back(height, weight, num);
    }

    sort(students.begin(), students.end());

    for (int i = 0; i < n; i++) {
        cout << students[i];
    }

    return 0;
}