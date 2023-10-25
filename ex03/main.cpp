/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:39:04 by ael-khni          #+#    #+#             */
/*   Updated: 2023/10/24 15:52:29 by sbadr            ###   ########.fr       */
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

int main ()
{
	Bureaucrat hermano("Hermano", 1);
	Bureaucrat ebil("Ebil", 150);
	cout << endl;

	cout << endl;
	ShrubberyCreationForm scf("Ebil");
	PresidentialPardonForm ppf("Ebil");
	RobotomyRequestForm rrf("Ebil");
	rrf.beSigned(hermano);
	cout << endl;

	try {
		rrf.execute(hermano);
	}
	catch (std::exception& e) {
		cerr << e.what() << endl;
	}

	cout << endl;
	return EXIT_SUCCESS;
}