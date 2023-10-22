#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
        Bureaucrat();

    public:
        std::string getName() const;
        int         getGrade() const;

        void        incGrade();
        void        decGrade();

        Bureaucrat& operator=( const Bureaucrat& rhs );
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();
        void signForm(Form &);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&   operator<<( std::ostream& os, const Bureaucrat& rhs );

#endif