#include "./Bureaucrat.hpp"

int main()
{
    Form *AA = new Form ("test1", 25 ,5);
    Bureaucrat A =  Bureaucrat ("test1", 5);
    Form *BB = new Form ("test2", 15 ,15);
    Bureaucrat B =  Bureaucrat ("test2", 10);
    Form *CC = new Form ("test3", 10 ,15);
    Bureaucrat C =  Bureaucrat ("test3", 20);
    try{

        AA->beSigned(A);
        BB->beSigned(B);
        CC->beSigned(C);

    }
    catch(std::exception &s)
    {
        std::cout << s.what();
    }
        std::cout << std::endl;
        std::cout << *AA << std::endl;
        std::cout << *BB << std::endl;
        std::cout << *CC << std::endl;
}