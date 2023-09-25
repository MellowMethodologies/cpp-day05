#include "./Bureauctrat.hpp"

int main()
{
    try{
        Form *AA = new Form ("test1", 25 ,5);
        Bureaucrat *A = new Bureaucrat ("test1", 5);
        Form *BB = new Form ("test2", 15 ,100);
        Bureaucrat *B = new Bureaucrat ("test2", 1);

        std::cout << *AA << std::endl;
        std::cout <<  std::endl;
        std::cout << *A << std::endl;
        AA->beSigned();
        A->signForm(*AA);
        std::cout <<  std::endl;
        std::cout << *BB << std::endl;
        std::cout <<  std::endl;
        std::cout << *B << std::endl;
        BB->beSigned();
        B->signForm(*BB);
        std::cout <<  std::endl;
    }
    catch(std::exception &s)
    {
        std::cout << s.what();
    }
}