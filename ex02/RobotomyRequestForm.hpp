#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(){};
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm const &operator=(RobotomyRequestForm&);
        
        void execute(Bureaucrat const & executor) const;

};


#endif