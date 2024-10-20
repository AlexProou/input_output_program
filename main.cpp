#include <iostream>

int main() {
    std::cout << "Enter your first name: ";
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Enter your last name: ";
    std::string last_name;
    std::cin >> last_name;

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Enter your height: ";
    double height;
    std::cin >> height;
    
    std::cout << "Your full name is: " << first_name << " " << last_name << std::endl;
    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your height is: " << height << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;


}