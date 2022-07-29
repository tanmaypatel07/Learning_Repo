#include <iostream>

int main(){
    std::cout << "hello world" << std::endl;
    int a = 0, b = 1;
    int s = a + b;
    for (int i = 0; i <= 10; i++){
        std::cout << a << std::endl;
        s = a + b;
        a = b;
        b = s;
        // hello world
    }
    return 0;
}