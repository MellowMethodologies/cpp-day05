#include "./Bureauctrat.hpp"

int main()
{
    try{
        Bureaucrat A ("test1", 5);
        Bureaucrat B ("test2", 1);
        Bureaucrat C ("test3", 15);
        Bureaucrat D ("test4", 160);

        std::cout << A << std::endl;
        std::cout << B << std::endl;
        std::cout << C << std::endl;
        std::cout << D << std::endl;
    }
    catch(std::exception &s)
    {
        std::cout << s.what();
    }
}