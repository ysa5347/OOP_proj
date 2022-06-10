#include <iostream>

enum denomination{
    A = 1,
    Two,
    J = 10,
    Q = 10,
    K = 10
};

int main(){
    int k = denomination.A;
    std::cout << k << std::endl;
    return 0;
}