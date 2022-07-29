#include <iostream>

int main(){
    std::cout << "hello world" << std::endl;
    int a = 0;
    int b = 1;
    int sum;
    for (int i = 0; i <= 10; i++){
        std::cout << a << std::endl;
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}