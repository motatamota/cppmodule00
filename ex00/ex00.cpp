/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:43 by tashiget          #+#    #+#             */
/*   Updated: 2024/10/16 00:28:43 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int ac, char **av)
{
	int			n;
	size_t		m;
	std::string	str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	n = 1;
	while (n < ac)
	{
		m = 0;
		str = *(av + n);
		while (m < str.size())
		{
			std::cout << (char)toupper(str[m]);
			m++;
		}
		n++;
	}
	std::cout << std::endl;
}
