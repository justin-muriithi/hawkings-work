/*
NAME:JUSTIN MURIITHI
REG NO:BSCIT-05-0071/2024
TWO DIMENSIONAL ARRAY
*/
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 3x3 Matrix

    cout << "Two-Dimensional Array:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
