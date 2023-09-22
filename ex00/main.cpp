#include "./Bureauctrat.hpp"

int main()
{
    try{
        Bureaucrat ("test4", 0);
        Bureaucrat A("test1", 5);
        Bureaucrat B("test2", 1);
        Bureaucrat C("test3", 150);
    }
    catch(Bureaucrat)
    {
        std::cout << what();
    }
}