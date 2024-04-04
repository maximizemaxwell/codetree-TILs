#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Cast {
    public: string date, day, weather;
    Cast(string date, string day, string weather){
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    bool operator<(const Cast& other) const{
        return date < other.date;
    }
     friend ostream& operator<<(ostream& os, const Cast& cast) {
        os << cast.date << " " << cast.day << " " << cast.weather;
        return os;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    vector<Cast> casts; 
    cin >> n;
    string date, day, weather;
    
    for(int i = 0; i < n; i++) {
        cin >> date >> day >> weather;
        casts.emplace_back(date, day, weather);
    }
    sort(casts.begin(), casts.end());

    for (int i = 0; i < n; i++) 
        if (casts[i].weather == "Rain"){
        cout << casts[i];
        break;}
    }