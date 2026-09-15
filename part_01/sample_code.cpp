#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int user_age = 34;
    double temperature = 20.6;
    bool is_alive = true;
    string user_name = "Sarah";
    const int minutes_in_hour = 60;
    string user_names[2] = {"Sally", "Joe"};

    std::cout << user_age << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;
    std::cout << minutes_in_hour << std::endl;
    std::cout << user_names[0] << std::endl;


    vector<string> users = {"Sam", "Sally", "Sarah"};
    std::cout << users.at(0) << std::endl;
    // Modify item in vector array
    users.at(1) = "Jill";
    std::cout << users.at(1) << std::endl;
    // Get vector size
    std::cout << users.size() << std::endl;
    // Add element to vector array
    users.push_back("Bob");
    std::cout << users.size() << std::endl;
}