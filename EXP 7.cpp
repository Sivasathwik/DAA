#include <iostream>

using namespace std;

int main() {
    const float PI = 3.14159f;
    float radius, volume;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}
