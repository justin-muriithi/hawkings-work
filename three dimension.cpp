/*
NAME:JUSTIN MURIITHI
REG NO:BSCIT-05-0071/2024
TWO DIMENSIONAL ARRAY
*/
#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2] = { 
        { {1, 2}, {3, 4} }, 
        { {5, 6}, {7, 8} } 
    }; // 2x2x2 3D array

    cout << "Three-Dimensional Array:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
