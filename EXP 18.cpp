#include <iostream>
using namespace std;
double kmToMiles(double km) {
    return km * 0.621371; 
}
int main() {
    double kmPerHour;
    cout << "Enter speed in kilometers per hour: ";
    cin >> kmPerHour;
    double milesPerHour = kmToMiles(kmPerHour);
    cout << "Speed in miles per hour: " << milesPerHour << " mph" << endl;
    return 0;
}
