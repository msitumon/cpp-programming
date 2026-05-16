#include<iostream>
#include<string>
using namespace std;
int main(){
    //Change an array element.
    string fruits[5]={"Apple","Banana","Orange","Coconat","Olive"};
    for(int i=0; i<5; i++){
        cout << fruits[i] <<"\n";
    }
    cout <<"\nEnter you change:\n";
    for(int j=0; j<5; j++){
        cout <<fruits[j] <<": ";
        cin >> fruits[j];
    }
    cout <<"\nUpdated fruits list:\n";
    for(int i=0; i<5; i++){
        cout << fruits[i] <<"\n";
    }
return 0;
}