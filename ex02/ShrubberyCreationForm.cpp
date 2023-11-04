#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ):Form( target, 145, 137 ),target( target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm( ){ }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &a ):Form( a ), target( a.target ){ }

ShrubberyCreationForm const &ShrubberyCreationForm::operator=( ShrubberyCreationForm& ) { return *this; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if ( executor.getGrade() > this->get_gradeE())
            throw Form::GradeTooLowException();
    else
    {
        std::ofstream Myfile(target + "_shrubbery");
        if (!Myfile.is_open())
            throw std::runtime_error("");
        Myfile << "   ###"<<std::endl;
        Myfile << "  #o###"<<std::endl;
        Myfile << " ##o#####"<<std::endl;
        Myfile << "###o######"<<std::endl;
        Myfile << " ##\\|###"<<std::endl;
        Myfile << "  #\\|##"<<std::endl;
        Myfile << "    }|{"<<std::endl;
        Myfile << "----}|{----"<<std::endl;
        Myfile.close();
    }
}
