
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main ()
{
    try
    {
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate1", 1);
            Intern intern;
            AForm *form = intern.makeForm("presidential pardon", "target1");
            form->execute(test);
        }
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate2", 1);
            Intern intern;
            AForm *form = intern.makeForm("robotomy request", "target2");
            form->execute(test);
        }
        //****** PresidentialPardon Form ******//
        {
            Bureaucrat test("Bureaucrate3", 1);
            Intern intern;
            AForm *form = intern.makeForm("shrubbery creation", "target3");
            form->execute(test);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}