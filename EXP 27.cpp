#include <iostream>

using namespace std;

int main() {
    int dividend, divisor;
    float quotient;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        
        quotient = static_cast<float>(dividend) / divisor;
        cout << "Quotient: " << quotient << endl;
    }

    return 0;
}
