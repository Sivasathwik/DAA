#include <iostream>
using namespace std;
int main() {
    double num1, num2, num3, num4;
    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    cout << "Enter the third number:\n ";
    cin >> num3;
    cout << "Enter the fourth number:\n ";
    cin >> num4;

    double total = num1 + num2 + num3 + num4;
    double average = total / 4;

    cout << "The total of the four numbers is: " << total << endl;
    cout << "The average of the four numbers is: " << average << endl;

    return 0;
}
