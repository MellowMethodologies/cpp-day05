#include "Form.hpp"

Form::Form():name("name"), grade_sign(75), grade_excec(75), _signed(false){ }

Form::Form(Form &t):name(t.name), grade_sign(t.grade_sign) , grade_excec(t.grade_excec), _signed(t._signed){ }

Form &Form::operator=(Form &t)
{
    if (this != &t)
        this->_signed = getSigned();
    return *this;
}

void Form:: beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->get_gradeS())
	{
		this->_signed = true;
		b.signForm(*this);
	}
	else
	{
		b.signForm(*this);
		throw (Form::GradeTooLowException());
	}
    _signed = true;
}

Form::Form(std::string const &name, int const grade_sign, int const grade_excec ):name(name), grade_sign(grade_sign) , grade_excec(grade_excec), _signed(false)
{
    if (grade_excec > 150) throw GradeTooLowException();
    else if (grade_excec < 1) throw GradeTooHighException();
}

Form::~Form(){}
std::string Form::getName()const { return this->name; }

int Form::get_gradeS()const{ return this->grade_sign; }

int Form::get_gradeE()const{ return this->grade_excec; }

bool Form::getSigned()const{ return this->_signed; }

const char*Form::GradeTooHighException::what() const throw(){ return "grade too High!!"; }

const char*Form::GradeTooLowException::what() const throw(){ return "grade too Low!!"; }

std::ostream &operator<<(std::ostream &o, const Form &r)
{
    o << "Form name: " << r.getName() << std::endl
    << "Grade to sign: " << r.get_gradeS() << std::endl
    << "Grade to execute: " << r.get_gradeE()<< std::endl
    << "Grade signed ?: " << (r.getSigned() ? "(true)" : "(false)")<< std::endl;
    return o;
}