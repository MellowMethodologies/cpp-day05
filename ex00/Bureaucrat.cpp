#include "./Bureauctrat.hpp"

std::string Bureaucrat::getName() const{ return this->name;}

int Bureaucrat::getGrade() const { return this->grade;}

void Bureaucrat::incrementGrade() {
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    --this->grade;
}

void Bureaucrat::decrementGrade(){ 
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

Bureaucrat:: Bureaucrat( const Bureaucrat& src ):name(src.name), grade(src.grade){ }

Bureaucrat:: ~Bureaucrat(){ }