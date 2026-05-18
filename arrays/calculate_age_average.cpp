#include <iostream>
using namespace std;
int main(){
    //The average of different ages.
    int ages[8] = {21, 18, 20, 23, 19, 20, 26, 22};
    float avg, sum=0;
    int i;
    int length=sizeof(ages)/sizeof(ages[0]);
    for (int age:ages) {
        sum+=age;
    }
    avg=sum/length;
    cout <<"The average age: " <<avg <<"\n";
return 0;
}