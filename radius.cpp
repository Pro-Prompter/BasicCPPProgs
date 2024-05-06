#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float area, radius, cir;

    cout << "Enter Radius: ";
    cin >> radius;

    area = radius * radius * 3.141;
    cir = 2.0 * 3.141 * radius;

    cout << fixed << setprecision(2);

    cout << "Area: " << area << endl;
    cout << "Circumference: " << cir << endl;

    return 0;
}