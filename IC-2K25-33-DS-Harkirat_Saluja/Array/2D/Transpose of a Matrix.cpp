#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {
        {2, 4, 6},
        {8, 10, 12}
    };

    cout << "Original Matrix:" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix:" << endl;

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 2; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}