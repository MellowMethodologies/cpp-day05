#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main ()
{
    try
    {
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate1", 1);
            PresidentialPardonForm ff("target1");
            ff.execute(test);
        }
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate2", 1);
            RobotomyRequestForm aa("target2");
            aa.execute(test);
        }
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate3", 1);
            ShrubberyCreationForm bb("target3");
            bb.execute(test);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}