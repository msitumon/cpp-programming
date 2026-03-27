#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName, nickname, fullName;
    cout <<"Enter your first name: ";
    getline(cin, firstName);
    cout <<"Enter your nickname: ";
    cin >>nickname;
    firstName.append(" ");
    fullName = firstName.append(nickname);
    cout <<"Your name is: " <<fullName;
return 0;
}