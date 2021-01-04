/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <elegija4mlg@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 17:15:11 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/04 22:51:41 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "ClassContact.hpp"

class   Phonebook{
	private:
		Contact		_contacts[8];
		size_t		_amount;

	public:
		Phonebook();
		~Phonebook();
		bool		add_contact(Contact contact);
		void		print_selected_contact(int index);
		void		print_list(void);
};

#endif
