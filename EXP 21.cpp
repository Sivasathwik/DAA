#include <iostream>
using namespace std;

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    double kelvin;
    
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    
    double fahrenheit = kelvinToFahrenheit(kelvin);
    
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}
