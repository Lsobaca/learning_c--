#include<iostream>


/**
 * The main function that demonstrates the usage of different loops in C++.
 *
 * @return 0 indicating successful execution
 */
int main(){
    // while loop
    int i = 0;
    while(i<10){
        std::cout<<i<<std::endl;
        i++;
    }
// do while loop
    i = 0;
    do{
        std::cout<<i<<std::endl;
        i++;
    }while (/* condition */ i<10);
    {
        std::cout<<"hello"<<std::endl;
    }

// for loop
    for (int i = 0; i < 10; i++)
    {
        std::cout<<i<<std::endl;
    }
    

    return 0;
}