#include <iostream>

using namespace std;
int main() {
     int n;

    cout << "Enter the number of students: ";
    cin >> n;

    int arr[n];

    cout << "Enter the marks:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout<<"Lowest marks = " << smallest;

    return 0;
}