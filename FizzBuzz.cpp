#include <iostream>
int main () {

    for (int i = 1; i <= 100; i++){
        int x = i % 3;
        int y = i % 5;
        if (x == 0 && y == 0) {
            std::cout << "FizzBuzz\n";
        }
        else if (x == 0 && y != 0){
            std::cout << "Fizz\n";
        }
        else if (x != 0 && y == 0){
            std::cout << "Buzz\n";
        }
        else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
