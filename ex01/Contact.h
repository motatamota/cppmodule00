/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:28 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/24 20:13:48 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>
# include <fstream>

class	Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	privacy;

public:
	Contact() {}
	~Contact() {}
	void		setContact(std::string, std::string, std::string, std::string, std::string);
	std::string	getfirst();
	std::string	getlast();
	std::string	getnick();
	std::string	getphone();
	std::string	getprivacy();
};
#endif
