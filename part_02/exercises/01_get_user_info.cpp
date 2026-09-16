// Get the name and age of a user and print the info using functions

#include <iostream>

using namespace std;

void greet_user(string user_name, int user_age)
{
    cout << "The user's name is " << user_name << " and their age is " << user_age << "." << endl;
}

void get_user_info()
{
    string name;
    int age;

    cout << "What is your name? ";
    cin >> name;
    cout << "What is your age? ";
    cin >> age;

    greet_user(name, age);
}

int main()
{
    get_user_info();
    return 0;
}

