/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:32 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/23 20:16:14 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

int	main()
{
	std::string	str;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "Enter your command; ADD, SEARCH, EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin, str);
		if (str == "ADD" || str == "add")
			phonebook.ADD();
		else if (str == "SEARCH" || str == "search")
			phonebook.SEARCH();
		else if (str == "EXIT" || str == "exit")
		{
			phonebook.EXIT();
			return (0);
		}
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::freopen("/dev/tty", "r", stdin);
			std::cout << std::endl;
		}
	}
}