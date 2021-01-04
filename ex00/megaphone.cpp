/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 16:36:39 by msafflow          #+#    #+#             */
/*   Updated: 2021/01/03 17:07:53 by msafflow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using	std::cout;
using	std::endl;
using	std::string;
using	std::toupper;

int			main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (size_t i = 1; i < argc; i++)
		{
			string str (argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				cout << (char)toupper(str[j]);
		}
		cout << endl;
	}
	return (0);
}
