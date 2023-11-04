#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int grade_sign;
        const int grade_excec;
        bool _signed;
    
    public:
        Form();
        Form(const Form &t);
        Form &operator=(Form &t);
        Form(std::string const &name, const int grade_sign, const int grade_excec);
        virtual ~Form();

        std::string getName()const;
        int get_gradeS()const;
        int get_gradeE()const;
        bool getSigned()const;

        void        beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const= 0;
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    
};

std::ostream&   operator<<( std::ostream& os, const Form& rhs );


#endif