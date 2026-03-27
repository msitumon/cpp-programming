#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter a and b: ";
    cin >> a >> b;
    cout <<"Is a is better than b: " <<(a > b) <<"\n";
    cout << boolalpha;
    int myAge, votingAge=18;
    cout <<"Enter your age: ";
    cin >> myAge;  
    cout <<"Your are old enough to vote: " <<(myAge > votingAge) <<"\n";
return 0;
}