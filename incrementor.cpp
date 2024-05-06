#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x = 20, y = 35;
    x = y++ + x++;
    y = ++y + ++x;
    cout << x << y;
    return 0;
}