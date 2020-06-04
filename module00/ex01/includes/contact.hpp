/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <bpeeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/30 13:18:14 by bpeeters       #+#    #+#                */
/*   Updated: 2020/04/01 05:32:29 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_login;
	std::string m_postalAddress;
	std::string m_emailAddress;
	std::string	m_phoneNumber;
	std::string	m_birthdayDate;
	std::string	m_favoriteMeal;
	std::string	m_underwearColor;
	std::string	m_darkestSecret;
public:
	Contact(const std::string &firstName = "", const std::string &lastName = "",
	const std::string &nickName = "", const std::string &login = "",
	const std::string &postalAddress = "", const std::string &emailAddress = "",
	const std::string &phoneNumber = "", const std::string &birthdayDate = "",
	const std::string &favoriteMeal = "", const std::string &underwearColor = "",
	const std::string &darkestSecret = "");
private:
	std::string	getFirstName() const;
	void		setFirstName(const std::string &firstName);
	std::string	getLastName() const;
	void		setLastName(const std::string &lastName);
	std::string	getNickName() const;
	void		setNickName(const std::string &nickName);
	std::string	getLogin() const;
	void		setLogin(const std::string &login);
	std::string	getPostalAddress() const;
	void		setPostalAddress(const std::string &postalAddress);
	std::string	getEmailAddress() const;
	void		setEmailAddress(const std::string &emailAddress);
	std::string	getPhoneNumber() const;
	void		setPhoneNumber(const std::string &phoneNumber);
	std::string	getBirthdayDate() const;
	void		setBirthdayDate(const std::string &birthdayDate);
	std::string	getFavoriteMeal() const;
	void		setFavoriteMeal(const std::string &favoriteMeal);
	std::string	getUnderwearColor() const;
	void		setUnderwearColor(const std::string &underwearColor);
	std::string	getDarkestSecret() const;
	void		setDarkestSecret(const std::string &darkestSecret);
	std::string readInfo();
	void		resizeString(std::string &str);
	void		displayFields(std::string temp);
public:
	void		addContact();
	void		displayInfo(int index);
	void		printFields();
};

#endif
