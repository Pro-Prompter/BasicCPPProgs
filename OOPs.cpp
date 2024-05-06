#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Person
{
    string name;
    int age;
    string address;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        do
        {
            cout << "Enter Age: ";
            cin >> age;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a numeric value for Age: ";
            }
            else
            {
                break;
            }
        } while (true);

        cout << "Enter Address: ";
        cin.ignore();
        getline(cin, address);
    }

    void Show()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Address: " << address << endl;
    }
};

int main()
{
    Person ali, raza, sara;

    ali.input();
    ali.Show();
    raza.input();
    raza.Show();
    sara.input();
    sara.Show();

    return 0;
}