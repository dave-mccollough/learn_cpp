// Ask the user for two integers and add them. Print the result
#include <iostream>
using namespace std;

int main() 
{

    int number_1;
    int number_2;
    int result;

    cout << "Let's add two whole numbers!" << endl;
    cout << "What is the first number you want to add? " << endl;
    cin >> number_1;
    cout << "What is the second number you want to add? " << endl;
    cin >> number_2;
    result = number_1 + number_2;
    cout << "The total is: " << result << endl;
    return 0;
}