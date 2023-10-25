#include "Bureaucrat.hpp"

std::string Bureaucrat::getName() const{ return this->name;}

int Bureaucrat::getGrade() const { return this->grade;}

void Bureaucrat::incGrade() {
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    --this->grade;
}

void Bureaucrat::decGrade(){ 
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    ++this->grade;
}

const char*Bureaucrat::GradeTooHighException::what() const throw(){
    return "grade too High!!";
}

const char*Bureaucrat::GradeTooLowException::what() const throw(){
    return "grade too Low!!";
}


void Bureaucrat::signForm(AForm &t)
{
    if (t.getSigned())
        std::cout << this->name << " signed " << t.getName()<< std::endl;
    else
        std::cout << this->name << " couldn't sign " << t.getName()<<" because Grade is too low!" << std::endl;
        
}

Bureaucrat:: Bureaucrat( const std::string& _name, int _grade ):name(_name){
    if (_grade > 150) throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1) throw Bureaucrat::GradeTooHighException();
    else grade = _grade;
}

Bureaucrat &Bureaucrat:: operator=( const Bureaucrat& a ){
    if (this != &a)
        grade = a.getGrade();
    return *this;
}

std::ostream&   operator<<( std::ostream& os, const Bureaucrat& rhs )
{
    os<< rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os; 
}


Bureaucrat:: Bureaucrat( const Bureaucrat& src ):name(src.name), grade(src.grade){ }

Bureaucrat:: ~Bureaucrat(){ }