#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    bool isCitizen;
    cout <<"Are you a citizen of Bangladesh?\n";
    cin >> isCitizen;
    
    if(age>=18){
        cout <<"Old enough to vote.\n";
        if(isCitizen){
            cout <<"And you are a citizen, so you can vote.\n";
        }
        else {
            cout <<"But you must be a citizen to vote.\n";
        }
    }
    else {
        cout <<"Not old enough to vote.\n";
    }
return 0;
}