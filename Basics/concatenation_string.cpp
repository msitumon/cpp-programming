#include<iostream>
using namespace std;
int main(){
    string firstName, nickName, fullName;
    cout <<"Enter your first name: ";
    getline(cin, firstName);
    cout <<"Enter your nickname: ";
    cin >> nickName;
    fullName = firstName + " " + nickName;
    cout <<"Your name is: " << fullName;
return 0;
}