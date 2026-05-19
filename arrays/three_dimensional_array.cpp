#include <iostream>
using namespace std;
int main() {
    //A three dimensional array.
    string letters[3][3][3] = {
        {
        { "A", "B", "C"},
        { "D", "E", "F" }
        },
        {
        { "G", "H", "I" },
        { "J", "K", "L" }
        }
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << letters[i][j][k] <<"    ";
            }
            cout <<"\n";
        }
    }
    return 0;
}
