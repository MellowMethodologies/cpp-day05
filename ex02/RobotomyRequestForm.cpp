#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target, 72, 45), target(target)
{
    std::string res = (rand() % 2) ? target + " has been robotomized" : "the robotomy failed";
    std::cout << "Make some drilling noise"<< std::endl;
    std::cout << res << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){ }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &){ }

RobotomyRequestForm const &RobotomyRequestForm:: operator=(RobotomyRequestForm&){ 
        return *this;
}

