#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a=4,b=7;
    float c=2.6;
    cout <<"The heighest value of " << a <<" and " << b <<" is: ";
    cout << max(a, b) <<"\n";
    cout <<"The lowest value of " << a <<" and " <<b <<" is: ";
    cout << min(a, b) <<"\n";
    //Include the cmath library.
    cout <<"Square root of " <<a <<" is: " << sqrt(a) <<"\n";
    cout <<"Round value of " <<c <<" is: " << round(c) <<"\n";
    cout <<"Logarithmic value: " << log(2) <<"\n";
return 0;
}