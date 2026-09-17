#include <iostream>
#include <vector>

using namespace std;

void booleans_conditionals()
{
    cout << boolalpha << endl;
    cout << true << endl;
    cout << false << endl;

    // Booleans as conditionals
    cout << (2 > 1) << endl;
    cout << ("hello" == "goodbye") << endl;
}

void combining_conditionals()
{
    cout << boolalpha << endl;
    cout << ((1 == 1) || (3 > 4)) << endl;

    double temperature = 25.0;

    cout << ((temperature > 20.0) && (temperature > 30.0)) << endl;
}

void conditional_if()
{
    int user_age = 40;

    if (user_age >= 21) {
        cout << "User is " << user_age << " years old and is allowed to go into the bar." << endl;
    }
}

void if_else_if() 
{
    int user_age = 19;

    if (user_age >= 21) {
         cout << "User is " << user_age << " years old and is allowed to go into the bar." << endl;
    } 
    else if (user_age <= 18) {
        cout << "User is " << user_age << " years old and is a teenager." << endl;
    } 
    else { 
        cout << "User is " << user_age << " years old and is considered a young adult." << endl;
    }
}

void for_loop() 
{
    for (int i = 0; i < 10; i++) {
        cout << "For Hello World " << i << endl;
    }

}

void while_loop() 
{
    int i = 0;

    while (i < 10)
    {
        cout << "While Hello World " << i << endl;
        i++;
    }
}

void loops_arrays() 
{
    vector<int> temperature_list = {64, 31, -12, 54, 92};

    for (int i = 0; i < temperature_list.size(); i++) {
        double temperature = temperature_list.at(i);
        cout << temperature_list.at(i) << endl;

        if (temperature < 32) {
            cout << "it's freezing! " << temperature << endl;
        }
        else {
            cout << "It's above freezing! " << temperature << endl;
        }
    }

    for (int temp: temperature_list) {
        cout << temp << endl;
    }
}

int main()
{
    booleans_conditionals();
    combining_conditionals();
    conditional_if();
    if_else_if();
    for_loop();
    while_loop();
    loops_arrays();

    return 0;
}