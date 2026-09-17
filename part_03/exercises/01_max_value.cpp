// Compute the max value inside a list of numbers

#include <iostream>
#include <vector>

using namespace std;


int compute_max_value(vector<int> age)
{
    if (!age.empty()) {

        int max_age = age[0];

        for (int i = 0; i < age.size(); i++) {
            if (max_age < age[i]) {
                max_age = age[i];
            }

    }
    return max_age;

    } else {
        return 0;
    }
}



int main() 
{
    vector<int> user_age = {64, 31, 12, 54, 14, 78};
    
    cout << "The max user age is: " << compute_max_value(user_age) << endl;

    return 0;
}
