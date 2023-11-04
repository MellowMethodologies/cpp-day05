#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string target;
        PresidentialPardonForm(){};

    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &);
        PresidentialPardonForm const &operator=(PresidentialPardonForm&);
        
        void execute(Bureaucrat const & executor) const;

};


#endif