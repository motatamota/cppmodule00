/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:28:23 by tashiget          #+#    #+#             */
/*   Updated: 2024/10/16 00:28:25 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

void	Contact::setContact(std::string first, std::string last, std::string nick, std::string phone, std::string priv)
{
	firstname = first;
	lastname = last;
	nickname = nick;
	phonenumber = phone;
	privacy = priv;
}

std::string	Contact::getfirst()
{
	return (firstname);
}

std::string	Contact::getlast()
{
	return (lastname);
}

std::string	Contact::getnick()
{
	return (nickname);
}

std::string	Contact::getphone()
{
	return (phonenumber);
}

std::string	Contact::getprivacy()
{
	return (privacy);
}