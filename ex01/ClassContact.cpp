/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:56:17 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/04 22:47:27 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

using   std::string;
using   std::setw;
using   std::cout;
using   std::endl;

Contact::Contact(void) {}
Contact::~Contact(void) {}

void    Contact::print_field(string str) {
  if (str.length() > 10)
	cout << str.substr(0, 9) << ".";
  else
	cout << setw(10) << str;
}

void	Contact::print_contact(int index){

  cout << setw(10) << index << "|";
  this->print_field(_First_name);
  cout << "|";
  this->print_field(_Last_name);
  cout << "|";
  this->print_field(_Nickname);
  cout << endl;
}

void	Contact::print_all_contact_fields(void){
  cout  << _First_name  	<< endl
		<< _Last_name   	<< endl
		<< _Nickname    	<< endl
		<< _Login      		<< endl
		<< _Address			<< endl
		<< _Email			<< endl
		<< _Phone			<< endl
		<< _Birthday		<< endl
		<< _Favorite_meal	<< endl
		<< _Underwear_color	<< endl
		<< _Secret			<< endl;
}