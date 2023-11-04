#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
class Form;

class ShrubberyCreationForm: public Form
{
    private:
        std::string target;
        ShrubberyCreationForm();

    public:
        ShrubberyCreationForm(std::string const target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ShrubberyCreationForm const &operator=(ShrubberyCreationForm&);
        
        void execute(Bureaucrat const & executor) const;
};


#endif