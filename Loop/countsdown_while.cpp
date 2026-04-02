#include<iostream>
using namespace std;
int main(){
    int countdown;
    cout <<"Enter remaining day: ";
    cin >> countdown;
    while(countdown > 0){
        cout << countdown <<"\n";
        countdown--;
    }
    cout <<"Happy new year!!\n";
return 0;
}