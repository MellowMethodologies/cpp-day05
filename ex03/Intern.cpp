#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern::~Intern() {
}

Intern& Intern::operator=(const Intern& other) {
    if (this != &other) {
    }
    return *this;
}

AForm *makeForm(std::string name, std::string target)
{
    AForm *form = NULL;
    std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            switch (i)
            {
                std::cout << "Intern creates " << name << std::endl;
                case 0:
                    form = new RobotomyRequestForm(target);
                    break;
                case 1:
                    form = new PresidentialPardonForm(target);
                    break;
                case 2:
                    form = new ShrubberyCreationForm(target);
                    break;
            }
        }
    }
    return form;
}
