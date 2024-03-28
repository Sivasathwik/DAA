#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0 || num > 9) {
        cout << "Invalid input. Please enter a single-digit number." << endl;
        return 1;
    }
    cout << "Rectangular form of " << num << ":" << endl;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}
