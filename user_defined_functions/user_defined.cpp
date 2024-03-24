#include<cmath>
#include<iostream>

/**
 * Returns the absolute value of an integer.
 *
 * @param x The integer for which the absolute value is to be found.
 *
 * @return The absolute value of the input integer.
 *
 * @throws None
 */
int abs(int x) {

    return x < 0 ? -x : x;
}

float abs2(float x) {
    return (x < 0.0) ? -x : x;
}

void paper() {
    std::cout<<"paper"<<std::endl;
}


int main() {
    std::cout<<abs(-5)<<std::endl;
    std::cout<<abs2(-5.4)<<std::endl;
    paper();

    return 0;
}