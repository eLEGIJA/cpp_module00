/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 18:59:29 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/04 22:51:35 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>

using std::string;

class Contact{
	private:
		string	_First_name;
		string	_Last_name;
		string	_Nickname;
		string	_Login;
		string	_Address;
		string	_Email;
		string	_Phone;
		string	_Birthday;
		string	_Favorite_meal;
		string	_Underwear_color;
		string	_Secret;

	public:
		Contact();
		Contact(string fn, string ln, string nn, string log, \
				string adr, string em, string ph, string bd, \
				string fm, string uc, string sec){
			_First_name			= fn;
			_Last_name			= ln;
			_Nickname			= nn;
			_Login				= log;
			_Address			= adr;
			_Email				= em;
			_Phone				= ph;
			_Birthday			= bd;
			_Favorite_meal		= fm;
			_Underwear_color	= uc;
			_Secret				= sec;
		};
		~Contact();
		void	print_field(string str);
		void	print_contact(int index);
		void	print_all_contact_fields(void);
};

#endif
