#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float cel, faren;

    cout << "Enter Temperature in Celsius: ";
    cin >> cel;

    faren = 9.0 / 5.0 * cel + 32;

    cout << fixed << setprecision(1);
    cout << "Temperature in Fahrenheit is: " << faren << endl;

    return 0;
}