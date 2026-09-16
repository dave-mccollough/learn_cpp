// Ask the user for 2 integers, add and print them using functions

#include <iostream>

using namespace std;

void print_result(int result)
{
    cout << "The total is: " << result << endl;

}

void add_integers(int num_1, int num_2)
{
    int result =  num_1 + num_2;
    print_result(result);
}

void get_integers()
{
    int number_1;
    int number_2;
   

    cout << "Let's add two whole numbers!" << endl;
    cout << "What is the first number you want to add? " << endl;
    cin >> number_1;
    cout << "What is the second number you want to add? " << endl;
    cin >> number_2;

    add_integers(number_1, number_2);
}




int main() 
{
    get_integers();
    return 0;
}