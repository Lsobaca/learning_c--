#include <iostream>

int main()
{
    enum grade
    {
        A,
        B,
        C,
        D,
        F
    };
    grade g = static_cast<grade>(A + 2);
    grade g2 = static_cast<grade>(A + 3);
    grade g3 = static_cast<grade>(A + 4);

    std::cout << g << std::endl;
    std::cout << g2 << std::endl;
    std::cout << g3 << std::endl;


    // using enum to register a course, then print it. it would print out the enum value location
    // which is 0 for CS, 1 for IS, 2 for EE
    // then a user can input the class name, and it would print out the enum value
    enum course
    {
        CS,
        IS,
        EE
    };
    course registered;
    std::string myclass;
    std::getline(std::cin, myclass);

    if(myclass == "CS")
    {
        registered = CS;
        std::cout << "CS" << std::endl;
        std::cout << registered << std::endl;
    }
    else if(myclass == "IS")
    {
        registered = IS;
        std::cout << "IS" << std::endl;
        std::cout << registered << std::endl;
    }
    else if(myclass == "EE")
    {
        registered = EE;
        std::cout << "EE" << std::endl;
        std::cout << registered << std::endl;
    }


    // The code below switches between different cases based on the value of 'registered'.
    // Each case represents a different course (CS, IS, EE) and if 'registered' matches one of those values, it will execute the code block for that case.
    // The default case is executed if 'registered' does not match any of the cases.
    switch (registered)
    {
    case CS: // If 'registered' is CS, output "CS"
        std::cout << "CS" << std::endl;
        break;
    case IS: // If 'registered' is IS, output "IS"
        std::cout << "IS" << std::endl;
        break;
    case EE: // If 'registered' is EE, output "EE"
        std::cout << "EE" << std::endl;
        break;
    
    default: // If 'registered' does not match any of the cases, do nothing.
        break;
    }

    classes(registered);

    return 0;
}


void classes(course registered){
    switch(registered)
    {
    case CS:
        std::cout << "CS" << std::endl;
        break;
    case IS:
        std::cout << "IS" << std::endl;
        break;
    case EE:
        std::cout << "EE" << std::endl;
        break;
    }
}