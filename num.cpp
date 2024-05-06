#include <iostream>

using namespace std;

int main()
{
    cout << "Number\tSquare\tCube" << endl;

    for (int i = 1; i <= 5; ++i)
    {
        cout << i << "\t" << i * i << "\t" << i * i * i << endl;
    }

    return 0;
}