#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while (i < 5)
    {
        ++i;

        if (i % 2 != 0)
        {
            continue;
        }

        cout << i << " is an even number" << endl;
    }

    return 0;
}