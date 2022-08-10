#include<iostream>
#include<cmath>

/*
@author Luis Ortiz

14. (Hard drive storage capacity) If you buy a 40GB hard drive, then chances
are that the actual storage on the hard drive is not 40GB. This is due to the
fact that, typically, a manufacturer uses 1000 bytes as the value of 1K bytes,
1000K bytes as the value of 1MB, 1000MB as the value of 1GB. Therefore,
a 40GB byte hard drive contains 40,000,000,000 bytes. However, in
computer memory, as given in Table 1-1 (Chapter 1), 1KB is equal to
1024 bytes, and so on. So the actual storage on a 40GB hard drive is
approximately 37.25GB. (You might like to read the fine print next time
you buy a hard drive.) Write a program that prompts the user to enter the
size of the hard drive specified by the manufacturer, on the hard drive box,
and outputs the actual storage capacity of the hard drive.

*/



int main(){
    const int KILOBYTE = 1000;
    const int MEGABYTE = 1000 * KILOBYTE;
    const int GIGABYTE = 1000 * MEGABYTE;

    const int BYTE = 8;
    const int KILOBYTE2 = 1024 * BYTE;
    const int MEGABYTE2 = 1024 * KILOBYTE;
    const int GIGABYTE2 = 1024 * MEGABYTE;

    double user_HD;

    std::cout<<"Enter the amount of storage(GB): ";
    std::cin>>user_HD;
    
    user_HD = user_HD * GIGABYTE;

    std::printf("The real amount is %.2f Gigabytes", user_HD/GIGABYTE2);

    


    return 0;
}