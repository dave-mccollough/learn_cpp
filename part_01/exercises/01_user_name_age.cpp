// Get the users name and age and print to the console

#include <iostream>
using namespace std;

int main() 
{
    string name;
    int age;

    cout << "What is your name? ";
    cin >> name;
    cout << "What is your age? ";
    cin >> age;
    cout << "The user's name is " << name << " and their age is " << age << "." << endl;
    return 0;
}