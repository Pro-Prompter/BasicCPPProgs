#include <iostream>

using namespace std;

int main()
{
    int num, limit;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    if (num <= 0 || limit <= 0)
    {
        cout << "Error: number and limit must be greater than 0." << endl;
        return 1;
    }

    cout << "Multiplication Table for " << num << " up to " << limit << ":\n";
    for (int i = 1; i <= limit; ++i)
    {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }

    return 0;
}