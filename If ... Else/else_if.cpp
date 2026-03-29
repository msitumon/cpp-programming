#include<iostream>
using namespace std;
int main(){
    int time;
    cout <<"Enter the time: ";
    cin >> time;
    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning){
        cout <<"Good morning.";
    }
    else if (isDay){
        cout <<"Good day.";
    }
    else {
        cout <<"Good evening.";
    }
return 0;
}