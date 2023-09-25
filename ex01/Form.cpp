#include "Form.hpp"

Form::Form():name("name"), _grade_sign(75), _grade_excec(75), _signed(false){
}

Form::Form(Form &t):name(t.name), _grade_sign(t._grade_sign) , _grade_excec(t._grade_excec), _signed(t._signed){ }

Form &Form::operator=(Form &t)
{
    if (this != &t)
        this->_signed = getSigned();
    return *this;
}

void Form:: beSigned()
{
    if (_grade_excec > _grade_sign)
    {
        throw(GradeTooLowException());
        return ;
    }
    _signed = true;
}

Form::Form(std::string const &name, int const _grade_sign, int const _grade_excec ):name(name), _grade_sign(_grade_sign) , _grade_excec(_grade_excec), _signed(false)
{
    if (_grade_excec > 150) throw GradeTooLowException();
    else if (_grade_excec < 1) throw GradeTooHighException();
}

Form::~Form()
{

}
std::string Form::getName()const
{
    return this->name;
}
int Form::get_gradeS()const
{
    return this->_grade_sign;
}

int Form::get_gradeE()const
{
    return this->_grade_excec;
}

bool Form::getSigned()const
{
    return this->_signed;
}

const char*Form::GradeTooHighException::what() const throw(){
    return "grade too High!!";
}

const char*Form::GradeTooLowException::what() const throw(){
    return "grade too Low!!";
}

std::ostream &operator<<(std::ostream &o, const Form &r)
{
    o << "Form name: " << r.getName() << std::endl
    << "Grade to sign: " << r.get_gradeS() << std::endl
    << "Grade to execute: " << r.get_gradeE()<< std::endl
    << "Grade signed ?: " << (r.getSigned() ? "(true)" : "(false)")<< std::endl;
    return o;
}