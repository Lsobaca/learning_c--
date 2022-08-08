#include<iostream>
#include<string>

int main(){

    std::string first_name;
    std::string last_name;
    int age;
    double weight;

    std::cout << "Enter your full name: ";
    std::cin >> first_name >> last_name;
    std::cout<<"\n";
    std::cout<< "Enter your age: ";
    std::cin>>age;
    std::cout<<"\n";
    std::cout<< "Enter your weight: ";
    std::cin>>weight;
    std::cout<<"\n";

    std::cout<< first_name << " "<< last_name << " is " << age 
    << " years old and weighs " << weight << " pounds.";



    return 0;
}