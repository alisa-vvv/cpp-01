/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   main.cpp                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: avaliull <avaliull@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2026/01/28 18:56:37 by avaliull            #+#    #+#           */
/*   Updated: 2026/01/28 19:02:22 by avaliull            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::cout;

int	main(
	void
) {
	std::string	string = "HI THIS IS BRAIN";

	std::string	*string_PTR = &string;
	std::string	&string_REF = string;

	cout << "this is the adress of the string: " << &string;
	cout << '\n';
	cout << "this is the adress of the pointer: " << &string_PTR;
	cout << '\n';
	cout << "this is the adress of the reference: " << &string_REF;
	cout << '\n';

	cout << "this is the value of the string: " << string;
	cout << '\n';
	cout << "this is the value of the pointer: " << string_PTR;
	cout << '\n';
	cout << "this is the value of the reference: " << string_REF;
	cout << '\n';
}
