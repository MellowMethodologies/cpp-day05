/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:39:04 by ael-khni          #+#    #+#             */
/*   Updated: 2023/10/22 17:19:48 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Bureaucrat hermano("Hermano", 1);

	Bureaucrat ebil("Ebil", 150);
	cout << endl;

	cout << endl;
	ShrubberyCreationForm scf("Ebil");
	PresidentialPardonForm ppf("Ebil");
	RobotomyRequestForm rrf("Ebil");
	cout << endl;

	ebil.signForm(scf);
	scf.beSigned(ebil);
	ebil.signForm(scf);

	cout << endl;

	ebil.signForm(ppf);
	ppf.beSigned(ebil);
	ebil.signForm(ppf);

	cout << endl;

	ebil.signForm(rrf);
	rrf.beSigned(ebil);
	ebil.signForm(rrf);

	cout << endl;

	try {
		hermano.signForm(scf);
	}
	catch (std::exception& e) {
		cerr << e.what() << endl;
	}

	cout << endl;
	return EXIT_SUCCESS;
}