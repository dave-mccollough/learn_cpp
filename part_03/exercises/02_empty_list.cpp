// Create an empty list, ask user to give 5 numbers, print the max value
#include <iostream>
#include <vector>

using namespace std;

void display_max_value(int max_value)
{
    cout << "The max value inputed is: " << max_value << endl;
}

void get_max_value(vector<int> input)
{
    int max = 0;
    for (int number: input) {
        if (number > max) {
            max = number;
        }
    }
    display_max_value(max);
}

void get_user_input()
{
    vector<int> user_input;

    for (int i = 0; i < 5; i++){
        cout << "Please enter a number." << endl;
        int input_number;

        cin >> input_number;
        user_input.push_back(input_number);
    }
    get_max_value(user_input);
}

int main() 
{
    get_user_input();
    return 0;
}