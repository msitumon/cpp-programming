#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout <<"Enter x and y: ";
    cin >> x >> y;
    bool isGreater = x > y;
    if(isGreater){
        cout <<"X is greater than Y.";
    }
return 0;
}