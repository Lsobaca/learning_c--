#include<iostream>
#include<string>

int main(){
    // named const
    const float GRAVITY = 9.17;
    const double CONVERSION = 2.54f;

    int num1,num2;
    double sale;
    char first;
    std::string name;    

    num1 = 4;
    std::cout<<"num1 = "<< num1 << std::endl;

    num2 = 4 * 5 - 11;
    std::cout<<"num2 = "<< num2 << std::endl;

    sale = 0.02 * 1000;
    std::cout<<"sale = "<< sale << std::endl;

    first = 'D';
    std::cout<<"first = "<< first << std::endl;

    name = "Steve harvey";
    std::cout<<"name = "<< name << std::endl;

    // can do num1 + 2
    std::cout<<"num1 + 2 = " << num1 + 2 << std::endl;



    return 0;
}