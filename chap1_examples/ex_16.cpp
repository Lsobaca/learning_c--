/*
@author Luis Ortiz

16. A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
cartons of milk to a local grocery store. The cost of producing one liter of
milk is $0.38, and the profit of each carton of milk is $0.27. Write a
program that does the following:
a. Prompts the user to enter the total amount of milk produced in the
morning.
b. Outputs the number of milk cartons needed to hold milk. (Round your
answer to the nearest integer.)
c. Outputs the cost of producing milk.
d. Outputs the profit for producing milk.
*/

#include<iostream>
#include<cmath>

int main(){

    const int MILK_CARTON = 3.78;
    const double COST_OF_PRODUCTION = 0.38;
    const double PROFIT_FOR_EACH = 0.27;

    double liters,cost,profits;

    std::cout<<"Enter the amount of liters produced: ";
    std::cin>> liters;

    int cartons = (liters / MILK_CARTON);
    std::printf("Need %d cartons\n",cartons);
    std::printf("Cost of producing milk: %.2f\n",cartons * COST_OF_PRODUCTION);
    std::printf("Profits for producing milk: %.2f\n", cartons * PROFIT_FOR_EACH);
    return 0;
}