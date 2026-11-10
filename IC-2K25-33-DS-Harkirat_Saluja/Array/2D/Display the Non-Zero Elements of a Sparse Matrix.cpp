#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {0, 4, 0},
        {7, 0, 0},
        {0, 0, 9}
    };

    cout << "Row\tCol\tValue\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != 0)
                cout << i << "\t" << j << "\t" << a[i][j] << endl;
        }
    }

    return 0;
}