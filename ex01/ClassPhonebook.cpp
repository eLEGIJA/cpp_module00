/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 17:28:51 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/04 22:49:38 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

using   std::string;
using   std::cout;
using   std::endl;
using   std::setw;

Phonebook::Phonebook(void){
	_amount = 0;
}

bool Phonebook::add_contact(Contact contact){
  if (_amount >= 8)
	return false;
  _contacts[_amount] = contact;
  _amount++;
  return true;
}

void Phonebook::print_selected_contact(int index){
  if (index < 0 || index > 7 || index >= this->_amount) {
	cout << "Sorry, this index is invalid." << endl;
	return;
  }
  _contacts[index].print_all_contact_fields();
}

void Phonebook::print_list(void){
  cout << setw(10)  << "index"
					<< "|"
					<< "first name"
					<< "|"
					<< " last name"
					<< "|"
					<< "  nickname" 
					<< endl;
  for (int i = 0; i < _amount; i++)
	_contacts[i].print_contact(i);
}

Phonebook::~Phonebook(void) {}