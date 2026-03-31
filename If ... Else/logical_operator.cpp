#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter a, b & c: ";
    cin >> a >>b >>c;
    if (a>b && c>a){
        cout <<"Both conditions are true.";
    }
    else if(a>b || a>c){
        cout <<"At least one condition is true.";
    }
    else if(!(b>a)){
        cout <<"b is not greater than a.";
    }
    else {
        cout <<"Don't apply any condition.";
    }
return 0;
}