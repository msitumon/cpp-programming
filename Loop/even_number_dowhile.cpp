#include<iostream>
using namespace std;
int main(){
    int i,a,b;
    cout <<"Enter starting and ending point: ";
    cin >> a >> b;
    i = a;
    cout <<"Even number from " << a <<" to " << b <<": ";
    do{
        if(i%2==0){
            cout << i <<" ";
        }
        i++;
    }
    while(i<=b);
return 0;
}