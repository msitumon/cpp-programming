#include<iostream>
using namespace std;
int main(){
    int numbers,revNumbers=0;
    cout <<"Enter a numbers: ";
    cin >> numbers;
    while(numbers){
        revNumbers = revNumbers*10 + numbers%10;
        numbers/= 10;
    }
    cout <<"Reversed numbers: " << revNumbers <<"\n";
return 0;
}