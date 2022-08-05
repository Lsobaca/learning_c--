#include<iostream>

int main(){


    std::cout<<"static_cast<int>(7.9) = "<< static_cast<int>(7.9)<< std::endl;
    std::cout<<"static_cast<int>(3.3) = "<< static_cast<int>(3.3)<<std::endl;
    std::cout<<"static_cast<double>(25) = "<< static_cast<double>(25)<<std::endl;
    std::cout<<"static_cast<double>(5 + 3) = "<< static_cast<double>(5+3)<<std::endl;
    std::cout<<"static_cast<double>(15) / 2 = "<< static_cast<double>(15) / 2 <<std::endl;
    std::cout<<"static_cast<double>(15/2) = "<< static_cast<double>(15/2)<<std::endl;
    std::cout<<"static_cast<int>(7.8 + static_cast<double>(15)/2) = " << static_cast<int>(7.8 + static_cast<double>(15)/2)<<std::endl;
    std::cout<<"static_cast<int>(7.8 + static_cast<double>(15/2)) = " << static_cast<int>(7.8 + static_cast<double>(15/2))<<std::endl;

    return 0;
}