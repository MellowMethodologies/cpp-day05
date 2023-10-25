#include "AForm.hpp"

AForm::AForm():name("name"), grade_sign(75), grade_excec(75), _signed(false){}

AForm::AForm(const AForm &t):name(t.name), grade_sign(t.grade_sign) , grade_excec(t.grade_excec), _signed(t._signed){ }

AForm &AForm::operator=(AForm &t)
{
	if (this != &t)
		this->_signed = getSigned();
	return *this;
}

void AForm:: beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->get_gradeS())
	{
		this->_signed = true;
		b.signForm(*this);
	}
	else
	{
		b.signForm(*this);
		throw (AForm::GradeTooLowException());
	}
	_signed = true;
}

AForm::AForm(std::string const &name, int const grade_sign, int const grade_excec ):name(name), grade_sign(grade_sign) , grade_excec(grade_excec), _signed(false)
{
	if (grade_excec > 150) throw GradeTooLowException();
	else if (grade_excec < 1) throw GradeTooHighException();
}

AForm::~AForm(){}
std::string AForm::getName()const{ return this->name;}

int AForm::get_gradeS()const{ return this->grade_sign;}

int AForm::get_gradeE()const{ return this->grade_excec;}

bool AForm::getSigned()const{ return this->_signed; }

const char*AForm::GradeTooHighException::what() const throw(){ return "grade too High!!";}

const char*AForm::GradeTooLowException::what() const throw(){ return "grade too Low!!";}

std::ostream &operator<<(std::ostream &o, const AForm &r)
{
	o << "AForm name: " << r.getName() << std::endl
	<< "Grade to sign: " << r.get_gradeS() << std::endl
	<< "Grade to execute: " << r.get_gradeE()<< std::endl
	<< "Grade signed ?: " << (r.getSigned() ? "(true)" : "(false)")<< std::endl;
	return o;
}