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
    bool check_number = true;
    vector<int> user_input;

    while (check_number){
        cout << "Please enter a number." << endl;
        int input_number;
        cin >> input_number;
        if (input_number != 0) {
            user_input.push_back(input_number);
        } else {
            check_number = false;
            get_max_value(user_input);
        }
    }
}

int main() 
{
    get_user_input();
    return 0;
}