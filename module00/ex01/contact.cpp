/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/29 03:45:34 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:30:38 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "contact.hpp"

Contact::Contact(const std::string &firstName, const std::string &lastName,
const std::string &nickName, const std::string &login,
const std::string &postalAddress, const std::string &emailAddress,
const std::string &phoneNumber, const std::string &birthdayDate,
const std::string &favoriteMeal, const std::string &underwearColor,
const std::string &darkestSecret)
	: m_firstName(firstName),
	m_lastName(lastName),
	m_nickName(nickName),
	m_login(login),
	m_postalAddress(postalAddress),
	m_emailAddress(emailAddress),
	m_phoneNumber(phoneNumber),
	m_birthdayDate(birthdayDate),
	m_favoriteMeal(favoriteMeal),
	m_underwearColor(underwearColor),
	m_darkestSecret(darkestSecret)
{
}

std::string Contact::readInfo()
{
	std::string info;

	std::getline(std::cin, info);
	return info;
}

void		Contact::resizeString(std::string &str)
{
	str.resize(9);
	str.resize(10, '.');
}

void		Contact::displayFields(std::string temp)
{
	std::cout << '|';
	for (int i = temp.length(); i < 10; ++i)
		std::cout << ' ';
	if (temp.length() > 10)
		resizeString(temp);
	std::cout << temp;
}

void		Contact::addContact()
{
	std::cout << "Enter first name: ";
	setFirstName(readInfo());

	std::cout << "Enter last name: ";
	setLastName(readInfo());

	std::cout << "Enter nickname: ";
	setNickName(readInfo());

	std::cout << "Enter login: ";
	setLogin(readInfo());

	std::cout << "Enter postal address: ";
	setPostalAddress(readInfo());

	std::cout << "Enter email address: ";
	setEmailAddress(readInfo());

	std::cout << "Enter phone number: ";
	setPhoneNumber(readInfo());

	std::cout << "Enter birthday date: ";
	setBirthdayDate(readInfo());

	std::cout << "Enter favorite meal: ";
	setFavoriteMeal(readInfo());

	std::cout << "Enter underwear color: ";
	setUnderwearColor(readInfo());

	std::cout << "Enter darkest secret: ";
	setDarkestSecret(readInfo());
}

void		Contact::displayInfo(int index)
{
	std::cout << "         " << index;
	displayFields(m_firstName);
	displayFields(m_lastName);
	displayFields(m_nickName);
	std::cout << std::endl;
}

void		Contact::printFields()
{
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickName() << std::endl;
	std::cout << "Login: " << getLogin() << std::endl;
	std::cout << "Postal Address: " << getPostalAddress() << std::endl;
	std::cout << "Email Address: " << getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal: " << getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color: " << getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}

std::string	Contact::getFirstName() const
{
	return m_firstName;
}
void		Contact::setFirstName(const std::string &firstName)
{
	m_firstName = firstName;
}
std::string	Contact::getLastName() const
{
	return m_lastName;
}
void		Contact::setLastName(const std::string &lastName)
{
	m_lastName = lastName;
}
std::string	Contact::getNickName() const
{
	return m_nickName;
}
void		Contact::setNickName(const std::string &nickName)
{
	m_nickName = nickName;
}
std::string	Contact::getLogin() const
{
	return m_login;
}
void		Contact::setLogin(const std::string &login)
{
	m_login = login;
}
std::string	Contact::getPostalAddress() const
{
	return m_postalAddress;
}
void		Contact::setPostalAddress(const std::string &postalAddress)
{
	m_postalAddress = postalAddress;
}
std::string	Contact::getEmailAddress() const
{
	return m_emailAddress;
}
void		Contact::setEmailAddress(const std::string &emailAddress)
{
	m_emailAddress = emailAddress;
}
std::string	Contact::getPhoneNumber() const
{
	return m_phoneNumber;
}
void		Contact::setPhoneNumber(const std::string &phoneNumber)
{
	m_phoneNumber = phoneNumber;
}
std::string	Contact::getBirthdayDate() const
{
	return m_birthdayDate;
}
void		Contact::setBirthdayDate(const std::string &birthdayDate)
{
	m_birthdayDate = birthdayDate;
}
std::string	Contact::getFavoriteMeal() const
{
	return m_favoriteMeal;
}
void		Contact::setFavoriteMeal(const std::string &favoriteMeal)
{
	m_favoriteMeal = favoriteMeal;
}
std::string	Contact::getUnderwearColor() const
{
	return m_underwearColor;
}
void		Contact::setUnderwearColor(const std::string &underwearColor)
{
	m_underwearColor = underwearColor;
}
std::string	Contact::getDarkestSecret() const
{
	return m_darkestSecret;
}
void		Contact::setDarkestSecret(const std::string &darkestSecret)
{
	m_darkestSecret = darkestSecret;
}
