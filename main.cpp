#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    std::cout << "How old are you?: ";
    int age;
    std::cin >> age;
    if(age < 13){
        std::cout << "You are not old enough" << std::endl;
        return -1;
    } else if(age < 19) {
        std::cout << "You are almost 19\n";
    } else {
        std::cout << "False" << std::endl;
    }
    std::cout << "Always";
    return 0;
}
