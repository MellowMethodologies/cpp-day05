#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int grade_sign;
        const int grade_excec;
        bool  _signed;
        Form();
    public:
        Form(Form &t);
        Form &operator=(Form &t);
        Form(std::string const &name, const int _grade_sign, const int _grade_excec);
        ~Form();

        std::string getName()const;
        int get_gradeS()const;
        int get_gradeE()const;
        bool getSigned()const;

        void        beSigned(Bureaucrat &b);

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