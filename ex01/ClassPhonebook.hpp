/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 17:15:11 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/03 19:59:59 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "ClassContact.hpp"

class   Phonebook{
	private:
		Contact		contacts[8];
		size_t		amount;

	private:
		Phonebook();	
		virtual ~Phonebook();

		
};

#endif