

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


void print_average(double average)
{
    cout << "The average of the float values is: " << average << endl;
}



void average_floats()
{
    vector <double> values{12.5, 13.1, 11.9, 15.6};
    double sum = accumulate(values.begin(), values.end(), 0.0);
    double average = sum / values.size();
    
    print_average(average);
   
}



int main()
{
    average_floats();
    return 0;
}