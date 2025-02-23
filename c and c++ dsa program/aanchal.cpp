#include <iostream>
#include <string>

void saySorry() {
    std::string crush = "Aj";
    std::cout << "Hey " << crush << ", ";
    std::cout << "I'm really sorry for my mistake." << std::endl;
    std::cout << "I hope you can forgive me." << std::endl;
}

int main() {
    saySorry();
    return 0;
}

