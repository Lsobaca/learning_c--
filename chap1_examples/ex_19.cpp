/*
Write a program that prompts the user to input a number of quarters,
dimes, and nickels. The program then outputs the total value of the coins in
pennies.


*/

#include<iostream>


int main(){
    int quarters,dimes,nickels;
    std::cout<<"Enter your change: "<<std::endl;
    std::cin>>quarters>>dimes>>nickels;
    std::cout<<"Total in pennies: "<< ((quarters*25)+(dimes*10)+(nickels*5));

    return 0;
}
