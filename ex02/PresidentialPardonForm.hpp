#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
class AForm;

class PresidentialPardonForm: public AForm
{
    private:
        std::string target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &);
        PresidentialPardonForm const &operator=(PresidentialPardonForm&);
        
        void execute(Bureaucrat const & executor) const;

};


#endif