#include<iostream>
using namespace std;
int main(){
    int i=10;
    cout <<"Do while loop will always be executed at least one.\n";
    do{
        cout << i <<"\n";
        i++;
    }
    while(i<5);
return 0;
}