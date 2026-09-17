#include <iostream>
using namespace std;

int main() {
    int array[3][3][4];
    int nilai = 2;
    int cek = 0;
    int i,j,k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                array[i][j][k] = nilai;

                if (cek % 2 == 0) {
                    nilai -= 1;
                } else {
                    nilai += 2;
                }
                cek++;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        cout << "Lapis " << (i + 1) << ":" << endl;
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                cout << array[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}