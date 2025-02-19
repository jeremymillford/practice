#include <iostream>

const double EPSILON = 1e-10;
bool isAlmostEqual(double a, double b, double epsilon = EPSILON) {
    return std::abs(a - b) < epsilon;
}

int main() {
    double x = 0.1, y = 0.2, z = 0.3;
    std::cout <<std::boolalpha << (x + y == z) << std::endl;
    std::cout << ((x + y)/z == 1.0) << std::endl;
    std::cout << (x + y) << " " << z << std::endl;
    
    std::cout << (x + y - y == x) << std::endl;
   
    std::cout << isAlmostEqual(x + y, z) << std::endl;
    #include <iostream>


    return 0;
}
//small rouding error will be there in floating point numbers
// 0.1 + 0.2 = 0.30000000000000004
