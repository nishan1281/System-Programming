#include <iostream>

int main() {
    std::cout <<"Mike How much do you weight (pound):";

    int pounds;
    std::cin >> pounds;

    double conversionFactor = 0.454;

    std::cout <<"Your weight is: " << conversionFactor*pounds;
    std::cout <<" kg" << std::endl;

    bool great_shape = pounds<200;

    if (great_shape) {
        for (int i = 0; i<3; i++) {
            std::cout << "you are in a good shape" << std::endl;
        }
    } else {
        int i  = 0;
        while (i < 3) {
            std::cout << "you are not in a good shape" << std::endl;
            i++;
        }
    }

    return 0;
}
