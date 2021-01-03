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

class Contact{
	public:
		enum Field {
			First_name = 0,
			Last_name,
			Nickname,
			Login,
			Address,
			Email,
			Phone,
			Birthday,
			Favorite_meal,
			Underwear_color,
			Secret
		};
};

#endif