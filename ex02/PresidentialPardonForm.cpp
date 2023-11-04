#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target, 25, 5), target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a): Form( a ), target( a.target ){ }

PresidentialPardonForm const &PresidentialPardonForm:: operator=(PresidentialPardonForm&){ return *this; }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if ( executor.getGrade() > this->get_gradeE())
            throw Form::GradeTooLowException();
    else
            std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
