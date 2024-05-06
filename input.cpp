#include <iostream>
using namespace std;

int main()
{
    char name[25], city[30];
    int age;

    cout << "Enter your Name: ";
    cin >> name;

    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your City: ";
    cin >> city;

    cout << "\nYour First Name is " << name << endl;
    cout << "Your Age is " << age << endl;
    cout << "Your City is " << city << endl;
}