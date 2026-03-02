#include<iostream>
using namespace std;
int main(){
    //variable declaration
    const int studentID=27;
    int studentAge=21, Mark=78;
    float studentFee=240;
    char studentGrade='A';
    /*This is output set_intersection
    Print variables*/
    cout <<"Student ID: " << studentID <<"\n";
    cout << "Student age: " << studentAge <<"\n";
    cout << "Mark: " << Mark <<"\n";
    cout << "Student fee: " << studentFee <<"\n";
    cout << "Student grade: " << studentGrade <<"\n";

    //Area calculation
    int length=4, width=6, area;
    area=length*width;
    cout << "Area of the rectangle is: " << area <<"\n";
return 0;
}