/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 17:15:11 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/03 18:32:47 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>

class Contact{
	public:
		enum Field {
			FirstName = 0,
			LastName,
			Nickname,
			Login,
			Address,
			Email,
			Phone,
			Birthday,
			FavoriteMeal,
			UnderwearColor,
			Secret
		};
};

#endif