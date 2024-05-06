#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x = 15.674;
    double y = 235.73;
    double z = 9525.9864;

    cout << fixed << setprecision(2) << "setprecision" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << setprecision(3) << "setprecision(3)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << setprecision(4) << "setprecision(4)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << setprecision(3) << x << " ";
    cout << setprecision(2) << y << " ";
    cout << setprecision(4) << z << endl;

    return 0;
}