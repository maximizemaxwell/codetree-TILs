#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Student {
    public: string name; int kor, eng, math;

    Student(string name, int kor, int eng, int math) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
    bool operator<(const Student & other) const{
        if (kor != other.kor) return kor > other.kor;
        if (eng != other.eng) return eng > other.eng;
        return math > other.math;
    }
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.name <<" " << student.kor<<" "<<student.eng<<" "<<student.math<<endl;
        return os;
    }
    
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name; int kor, eng, math;
    vector<Student> students;
    for (int i = 0; i <n; i++) {
        cin >> name >> kor >> eng >> math;
        students.emplace_back(name, kor, eng, math);
    }
    sort(students.begin(), students.end());
    for(int i = 0; i < n; i++){
        cout << students[i];
    }
    return 0;
}