#include<iostream>
using namespace std;
int main(){
    int items;
    cout <<"Enter the total number of item: ";
    cin >> items;

    float cost_per_item;
    cout << "Enter cost per item: ";
    cin >> cost_per_item;
    
    auto currency='$';

    double total_cost=items*cost_per_item;
    //Print the result
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << currency << "\n";
    cout << "Total cost = " << total_cost << currency << "\n";
return 0;
}