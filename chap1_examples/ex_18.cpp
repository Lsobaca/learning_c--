/*
18. You found an exciting summer job for five weeks. It pays, say, $15.50
per hour. Suppose that the total tax you pay on your summer job
income is 14%. After paying the taxes, you spend 10% of your net
income to buy new clothes and other accessories for the next school
year and 1% to buy school supplies. After buying clothes and school
supplies, you use 25% of the remaining money to buy savings bonds.
For each dollar you spend to buy savings bonds, your parents spend
$0.50 to buy additional savings bonds for you. Write a program that
prompts the user to enter the pay rate for an hour and the number
of hours you worked each week. The program then outputs the
following

a. Your income before and after taxes from your summer job.
b. The money you spend on clothes and other accessories.
c. The money you spend on school supplies.
d. The money you spend to buy savings bonds.
e. The money your parents spend to buy additional savings bonds for
you.

*/
#include<iostream>

int main(){

    double pay_rate,hours;

    std::cout<<"Enter your pay rate: ";
    std::cin>>pay_rate;
    std::cout<<"Enter how many hours you work: ";
    std::cin>>hours;
    // summer job only 5 weeks
    double net_summer = pay_rate * hours * 5;
    double after_taxes = net_summer - (net_summer * .14);

    std::printf("Net income: %.2f\nAfter taxes: %.2f\n",net_summer, after_taxes );
    std::printf("Money spent on clothes and other accessories: %.2f\n",after_taxes * .10);
    std::printf("Money spent on school supplies: %.2f\n",after_taxes * .01);
    std::printf("Money buying saving bonds: %.2f\n",after_taxes * .25);
    std::printf("Money parents spend: %.2f",(after_taxes * .25) * .50);




    return 0;
}
