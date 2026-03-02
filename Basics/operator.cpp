#include<iostream>
using namespace std;
int main(){
    //Arithmetic operator(+, -, *, /, %, ++, --)
    int x=10, y=3;
    cout << "x+y=" <<(x+y) <<"\n";
    cout << "x-y=" <<(x-y) <<"\n";
    cout << "x*y=" <<(x*y) <<"\n";
    cout << "x/y=" <<(x/y) <<"\n";
    cout << "x%y=" <<(x%y) <<"\n";
    cout << "x++: x=" <<(x++) <<"\n";
    cout << "x--: x=" <<(x--) <<"\n\n";

    //Assignment operator(=, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=)
    x=12;
    cout << "x=" <<x <<"\n";
    int a=x;
    a+=3;
    cout << "x+=3: x=" <<a <<"\n";
    a=x;
    a-=3;
    cout << "x-=3: x=" <<a <<"\n";
    a=x;
    a*=3;
    cout << "x*=3: x=" <<a <<"\n";
    a=x;
    a/=3;
    cout << "x/=3: x=" <<a <<"\n";
    a=x;
    a%=3;
    cout << "x%=3: x=" <<a <<"\n";
    a=x;
    a&=3;
    cout << "x&=3: x=" <<a <<"\n";
    a=x;
    a|=3;
    cout << "x|=3: x=" <<a <<"\n";
    a=x;
    a^=3;
    cout << "x^=3: x=" <<a <<"\n";
    a=x;
    a>>=3;
    cout << "x>>=3: x=" <<a <<"\n";
    a=x;
    a<<=3;
    cout << "x<<=3: x=" <<a <<"\n\n";

    //Compaeison operator()
    cout << "Comparison operator(==, !=, >, <, >=, <=)\n\n";

    //Logical operator
    cout << "Logical operator(&&, ||, !)\n";

return 0;
}