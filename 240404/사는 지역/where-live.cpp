#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Person{
public: 
    string name, bunji, place;

    Person(string name, string bunji, string place) {
        this->name = name;
        this->bunji = bunji;
        this->place = place;
    }
    
    // 비교 연산자 오버로딩
    bool operator<(const Person& other) const {
        return name < other.name;
    }
};

int main(void) {
    int n;
    cin >> n;
    string name, bunji, place;
    vector<Person> people;
    
    // 사람 정보 입력
    for (int i = 0; i < n; i++){
        cin >> name >> bunji >> place;
        people.emplace_back(name, bunji, place);
    }
    
    // 이름을 기준으로 정렬
    sort(people.begin(), people.end());

    // 정렬된 결과 출력
    cout << "name " << people[n-1].name << endl;
    cout << "addr " << people[n-1].bunji << endl;
    cout << "city " << people[n-1].place << endl;
    

}