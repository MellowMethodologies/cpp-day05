#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int _grade_sign;
        const int _grade_excec;
        bool _signed;
    
    public:
        AForm();
        AForm(const AForm &t);
        AForm &operator=(AForm &t);
        AForm(std::string const &name, const int _grade_sign, const int _grade_excec);
        virtual ~AForm();

        std::string getName()const;
        int get_gradeS()const;
        int get_gradeE()const;
        bool getSigned()const;

        void        beSigned();
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

std::ostream&   operator<<( std::ostream& os, const AForm& rhs );


#endif