#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ):AForm( target, 145, 137 ),target( target )
{
    std::ofstream Myfile(target + "_shrubbery");

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

ShrubberyCreationForm::~ShrubberyCreationForm( ){ }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &a ):AForm( a ), target( a.target ){ }

ShrubberyCreationForm const &ShrubberyCreationForm::operator=( ShrubberyCreationForm& ) { return *this; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if ( executor.getGrade() > this->get_gradeE())
            throw AForm::GradeTooLowException();
    else
            std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
