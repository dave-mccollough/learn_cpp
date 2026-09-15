// Create a vector of 4 floats, compute the average and print it

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() 
{
    vector <double> values{12.5, 13.1, 11.9, 15.6};
    double sum = accumulate(values.begin(), values.end(), 0.0);
    double average = sum / values.size();
    cout << "The average of the float values is: " << average << endl;
    return 0;
}