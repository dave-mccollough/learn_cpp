#include <iostream>

using namespace std;

void say_hello(string user_name, int user_age)
{
    cout << "Hello, my name is " << user_name << " and I am " << user_age << " years old." << endl;
}

// This function multiples the passed in parameter by 3
int triple_number(int number)
{
    return number * 3;
}

int main() 
{
    say_hello("Steve", 15);
    cout << "4 * 3 = " << triple_number(4) << endl; // This line prints the result of the triple_number function

    return 0;
}