#include <iostream>
#include <sstream>

int main() {
    int current_number;
    std::string string;
    std::getline(std::cin, string);
    std::stringstream ss(string);
    while(ss >> current_number) {
        std::cout << current_number * current_number * current_number << " ";
    }

    std::cout << std::endl;
    return 0;
}