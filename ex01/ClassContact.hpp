/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 18:59:29 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/03 20:12:31 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <string>

using std::string;

class Contact{
	public:
		string	First_name = 0;
		string	Last_name = 0;
		string	Nickname = 0;
		string	Login = 0;
		string	Address = 0;
		string	Email = 0;
		string	Phone = 0;
		string	Birthday = 0;
		string	Favorite_meal = 0;
		string	Underwear_color = 0;
		string	Secret = 0;

	Contact(string fn, string ln, string nn, string log, \
			string adr, string em, string ph, string bd, \
			string fm, string uc, string sec){
		First_name = fn;
		Last_name = ln;
		Nickname = nn;
		Login = log;
		Address = adr;
		Email = em;
		Phone = ph;
		Birthday = bd;
		Favorite_meal = fm;
		Underwear_color = uc;
		Secret = sec;
	}
};

#endif