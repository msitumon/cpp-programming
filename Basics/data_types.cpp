#include<iostream>
using namespace std;
int main(){
    int x=10;
    //Integer stores whole numbers, without decimals

    float myFloatNum=5.99;
    //Floating point number stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits

    double myDoubleNum=9.98;
    //Double stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

    char myLetter='A';
    //Character stores a single character/letter/number, or ASCII values

    bool myBoolean=true;
    //Boolean stores true or false values

    string myText="Hello";
    //String

     
    cout << "Integer value x= " <<x <<"\n";
    cout << "Float value = " <<myFloatNum <<"\n";
    cout << "Double value = " <<myDoubleNum <<"\n";
    cout << "Character = " <<myLetter <<"\n";
    cout << "Boolean value = " <<myBoolean <<"\n";
    cout << "String value = " <<myText <<"\n";
return 0;
}