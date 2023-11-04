#include "./Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat A =  Bureaucrat ("Bureaucrate 1", 2);
        Bureaucrat B =  Bureaucrat ("Bureaucrate 2", 10);
        Bureaucrat C =  Bureaucrat ("Bureaucrate 3", 20);
        Form *AA = new Form ("Form 1", 25 ,5);
        Form *CC = new Form ("Form 3", 10 ,15);
        Form *BB = new Form ("Form 2", 20 ,15);

        AA->beSigned(A);
        BB->beSigned(B);
        CC->beSigned(C);
        std::cout << std::endl;
        std::cout << *AA << std::endl;
        std::cout << *BB << std::endl;
        std::cout << *CC << std::endl;

    }
    catch(std::exception &s)
    {
        std::cout << s.what();
    }
}