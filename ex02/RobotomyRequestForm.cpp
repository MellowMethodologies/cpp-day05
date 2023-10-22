#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45), target(target)
{
    std::string res = (rand() % 2) ? target + " has been robotomized" : "the robotomy failed";
    std::cout << "Make some drilling noise"<< std::endl;
    std::cout << res << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){ }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a):AForm(a), target(a.target){ }

RobotomyRequestForm const &RobotomyRequestForm:: operator=(RobotomyRequestForm&){ 
        return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if ( executor.getGrade() > this->get_gradeE())
            throw AForm::GradeTooLowException();
    else
            std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
