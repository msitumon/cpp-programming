#include<iostream>
using namespace std;
int main(){
    int choice, quantity;
    float price;
    cout <<"1 = Coffee - (price per item 60 taka) \n";
    cout <<"2 = Tea - (price per item 20 taka)\n";
    cout <<"Enter your choice: ";
    cin >> choice;
    
    switch (choice){
        case 1:
        cout <<"Enter total order number of Coffee: ";
        cin >> quantity;
        cout <<"You order Coffee.\n";
        price = 60*quantity;
        cout <<"And your total bill for payment is " <<price;
        break;
        case 2:
        cout <<"Enter total order number of Tea: ";
        cin >> quantity;
        cout <<"You order Tea.\n";
        price = 20*quantity;
        cout <<"And your total bill for payment is " <<price;
        break;
        default:
        cout <<"Invalid choice";
    }
return 0;
}