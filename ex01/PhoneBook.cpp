/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:50 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/23 20:07:44 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	index = 0;
	current = 0;
}

void	PhoneBook::ADD()
{
	std::cout << "Enter FirstName: ";
	std::cin >> firstname;
	std::cout << "Enter LastName: ";
	std::cin >> lastname;
	std::cout << "Enter NickName: ";
	std::cin >> nickname;
	std::cout << "Enter PhoneNumber: ";
	std::cin >> phonenumber;
	std::cout << "Enter privacy: ";
	std::cin >> privacy;
	book[current].setContact(firstname, lastname, nickname, phonenumber, privacy);
	current++;
	current = current % 8;
	if (index < 8)
		index++;
	std::cout << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::SEARCH()
{
	int	n;

	if (index > 0)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		std::cout << "Error: No data" << std::endl << std::endl;
		return ;
	}
	for (n = 1; n <= index ; n++)
	{
		std::cout << "|         " << n;
		n = n - 1;
		if (book[n].getfirst().size() > 10)
			std::cout << "|" << std::setw(10) << std::right << book[n].getfirst().substr(0, 9) + '.' << "|";
		else
			std::cout << "|" << std::setw(10) << std::right << book[n].getfirst() << "|";
		if (book[n].getlast().size() > 10)
			std::cout << std::setw(10) << std::right << book[n].getlast().substr(0, 9) + '.' << "|";
		else
			std::cout << std::setw(10) << std::right << book[n].getlast() << "|";
		if (book[n].getnick().size() > 10)
			std::cout << std::setw(10) << std::right << book[n].getnick().substr(0, 9) + '.' << "|";
		else
			std::cout << std::setw(10) << std::right << book[n].getnick() << "|";
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		n++;
	}
	std::cout << std::endl;
	n = -1;
	std::cout << "Enter index: ";
	while (!(std::cin >> n))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a valid index: ";
    }
	if (n > index || n <= 0)
	{
		std::cout << "Error: No Data" << std::endl << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|     phone|   privacy|" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "|         " << n;
	n = n - 1;
	if (book[n].getfirst().size() > 10)
		std::cout << "|" << std::setw(10) << std::right << book[n].getfirst().substr(0, 9) + '.' << "|";
	else
		std::cout << "|" << std::setw(10) << std::right << book[n].getfirst() << "|";
	if (book[n].getlast().size() > 10)
		std::cout << std::setw(10) << std::right << book[n].getlast().substr(0, 9) + '.' << "|";
	else
		std::cout << std::setw(10) << std::right << book[n].getlast() << "|";
	if (book[n].getnick().size() > 10)
		std::cout << std::setw(10) << std::right << book[n].getnick().substr(0, 9) + '.' << "|";
	else
		std::cout << std::setw(10) << std::right << book[n].getnick() << "|";
	if (book[n].getphone().size() > 10)
		std::cout << std::setw(10) << std::right << book[n].getphone().substr(0, 9) + '.' << "|";
	else
		std::cout << std::setw(10) << std::right << book[n].getphone() << "|";
	if (book[n].getprivacy().size() > 10)
		std::cout << std::setw(10) << std::right << book[n].getprivacy().substr(0, 9) + '.' << "|";
	else
		std::cout << std::setw(10) << std::right << book[n].getprivacy() << "|";
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl << std::endl;
	n++;
}

void	PhoneBook::EXIT()
{
	std::cout << "good bye!" << std::endl;
}