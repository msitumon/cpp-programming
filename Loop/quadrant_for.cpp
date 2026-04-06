#include<iostream>
using namespace std;
int main(){
    //Identify the quadrant number.
   int x,y;
   for( ; ; ){
    cin >> x >>y;
    if(x==0 || y==0){
        break;
    }
    else if(x>0 && y>0){
        cout <<"First quadrant.\n";
    }
    else if(x<0 && y>0){
        cout <<"Second quadrant.\n";
    }
    else if(x<0 && y<0){
        cout <<"Third quadrant.\n";
    }
    else{
        cout <<"Forth quadrant.\n";
    }
   }
return 0;
}