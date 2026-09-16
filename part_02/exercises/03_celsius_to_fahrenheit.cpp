// Convert celsius to fahrenheit

#include <iostream>

using namespace std;


double calculate(double celsius)
{
    return (celsius * 1.8) + 32.0;
}

void get_temps_from_user()
{
    double celsius;

    cout << "This program converts celsisus temperatures to fahrenheit" << endl;
    cout << "Please provide a celsius temperature" << endl;
    cin >> celsius;
    cout << "The temperature in fahrenheit is " << calculate(celsius) << "°F" << endl;
}

int main() 
{
    get_temps_from_user();
    return 0;
}