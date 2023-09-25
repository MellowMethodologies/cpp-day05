#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target, 25, 5), target(target)
{
        std::cout << target << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){ }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &){ }

PresidentialPardonForm const &PresidentialPardonForm:: operator=(PresidentialPardonForm&){ 
        return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
        if (executor.getGrade() > 5 || AForm::getSigned())
                throw("the form isn't signed or the grade isn't hight enough!\n");
}
