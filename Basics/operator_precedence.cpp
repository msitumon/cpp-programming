#include<iostream>
using namespace std;
int main(){
    /* Order of operators
    highest to lowest
    () ~ Parentheses
    *, /, % ~ Multiplication, Division, Modulus
    +, -, ~ Addition, Subtraction
    >, <, >=, <=, ~ Comparison
    ==, != ~ Equality
    &&, || ~ Logical
    = ~ Assignment */
    int result1= 5*2-8/4+5;
    int result2= 100/10-(4/2+5);

    cout << result1 <<"\n";
    cout << result2 <<"\n";
return 0;
}