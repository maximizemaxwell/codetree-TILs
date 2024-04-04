#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student{
    public: string name; int height, weight;

    Student(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    bool operator <(const Student& other) const{
        return height < other.height;
    }
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.name << " " << student.height << " "  << student.weight;
        return os;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name; int height, weight;
    vector<Student> students;

    for(int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        students.emplace_back(name, height, weight);
    }
    sort(students.begin(), students.end());

    for(int i = 0; i < n; i++) {
        cout << students[i] <<endl;
    }
    return 0;
}