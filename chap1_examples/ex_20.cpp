/**
 * @file ex_20.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * 
 *   Newton’s law states that the force, F, between two bodies of masses M1 and
 *   M2 is given by:
 *   F = k M1M2/d2
 * 
 *   n which k is the gravitational constant and d is the distance between the
 *   bodies. The value of k is approximately 6.6710-8 dyn. cm2/g2. 
 *   Write a program that prompts the user to input the masses of the bodies and the
 *   distance between the bodies. The program then outputs the force between
 *   the bodies
 */


#include<iostream>
#include<cmath>

int main(){

    std::cout.scientific;
    const double GRAVITATIONAL_CONSTANT = 6.6743e-11;

    double mass1,mass2,distance;
    std::cout<<"Enter the masses of the two objects(use e for notation): ";
    std::cin>>mass1>>mass2;
    std::cout<<"Enter the distance between the objects: ";
    std::cin>>distance;

    double force = GRAVITATIONAL_CONSTANT * ((mass1*mass2)/distance);
    std::cout<<"The force is "<< force;

    return 0;
}




