/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:52 by tashiget          #+#    #+#             */
/*   Updated: 2024/10/16 00:28:54 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <iomanip>
# include <limits>
# include "Contact.h"

class	PhoneBook
{
private:
	Contact		book[8];
	int			current;
	int			index;
	std::string	firstname;
	std::string	lastname;
	std::string	phonenumber;
	std::string	nickname;
	std::string	privacy;

public:
	PhoneBook();
	void	ADD();
	void	SEARCH();
	void	EXIT();
};

#endif
