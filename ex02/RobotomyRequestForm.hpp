#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
class AForm;

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm const &operator=(RobotomyRequestForm&);
        
        void execute(Bureaucrat const & executor) const;

};


#endif