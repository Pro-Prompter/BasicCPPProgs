#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float a, b;
    int c;
    a = 10.3;
    b = 5.2;
    c = (int)a % (int)b;
    cout << "Result is " << c;
    getch();
}