/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 18:44:17 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/04 22:51:51 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

using   std::cin;
using   std::cout;
using   std::string;
using   std::endl;

Contact		set_contact_info(void) {
	string    input[11];

	cout << "Enter the contact's first name, please."		<< endl;
	cin >> input[0];

	cout << "Enter the contact's last name, please."		<< endl;
	cin >> input[1];

	cout << "Enter the contact's nickname, please."			<< endl;
	cin >> input[2];

	cout << "Enter the contact's login, please."			<< endl;
	cin >> input[3];

	cout << "Enter the contact's postal address, please."	<< endl;
	cin >> input[4];

	cout << "Enter the contact's email address, please."	<< endl;
	cin >> input[5];

	cout << "Enter the contact's phone number, please."		<< endl;
	cin >> input[6];

	cout << "Enter the contact's birthday, please."			<< endl;
	cin >> input[7];

	cout << "Enter the contact's favourite meal, please."	<< endl;
	cin >> input[8];

	cout << "Enter the contact's underwear colour, please."	<< endl;
	cin >> input[9];

	cout << "Enter the contact's darkest secret, please."	<< endl;
	cin >> input[10];

	Contact new_contact = Contact(input[0], input[1], input[2], input[3], \
						input[4], input[5], input[6], input[7], \
						input[8], input[9], input[10]);
	return (new_contact);
}

int			main(void) {
	string		input;
	Phonebook	my_phonebook;

	while (true) {
		cout << "Please enter your command: " << endl;
		cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD") {
			Contact new_contact = set_contact_info();
			if (!my_phonebook.add_contact(new_contact))
			cout << "Contact list is full" << endl;
		} else if (input == "SEARCH") {
			my_phonebook.print_list();
			cout	<< "Please enter the index you'd like to see more information of"
					<< endl;
			cin >> input;
			int index = (int)(input.at(0) - 48);
			my_phonebook.print_selected_contact(index);
		}
	}
}
