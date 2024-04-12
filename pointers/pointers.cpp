#include<iostream>
#include<cmath>

// passing a pointer to a function 
void square(int *x) {
    *x = *x * *x;
}



int main() {
    
    int x = 5;
    int *y = &x;

    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"&x = "<<&x<<std::endl;
    std::cout<<"y = "<<y<<std::endl;
    std::cout<<"*y = "<<*y<<std::endl;


    // pointer arithmetic
    int z = *y + 1;
    std::cout<<"z = "<<z<<std::endl;

    // pointer to pointer
    int **w = &y;
    std::cout<<"w = "<<w<<std::endl;
    std::cout<<"*w = "<<*w<<std::endl;
    std::cout<<"**w = "<<**w<<std::endl;

    // dereferencing a pointer
    std::cout<<"*y = "<<*y<<std::endl;
    *y = *y + 1;
    std::cout<<"*y = "<<*y<<std::endl;

    // reassigning a variable with a pointer
    y = &z;
    std::cout<<"y = "<<y<<std::endl;
    std::cout<<"*y = "<<*y<<std::endl;

    // pointer to an array
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    std::cout<<"ptr = "<<ptr<<std::endl;
    std::cout<<"*ptr = "<<*ptr<<std::endl;
    std::cout<<"*(ptr+1) = "<<*(ptr+1)<<std::endl;
    std::cout<<"*(ptr+2) = "<<*(ptr+2)<<std::endl<<std::endl;

    // pointer to an array with for loop
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"*(ptr+"<<i<<") = "<<*(ptr+i)<<std::endl;
    }
    std::cout<<std::endl;

    // pointer to an array with while loop
    int *p = arr;
    int i = 0;
    while (i < 5)
    {
        std::cout<<"*(p+"<<i<<") = "<<*(p+i)<<std::endl;
        i++;
    }
    std::cout<<std::endl;

    int *b = y;
    std::cout<<"b = "<<*b<<std::endl;
    square(b);
    std::cout<<"b = "<<*b<<std::endl;





    return 0;
}