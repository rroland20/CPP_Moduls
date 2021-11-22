#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "phonebook.hpp"

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
	public:
		void setFirstname(const std::string firstname) {
			_firstname = firstname;
		}
		void setLastname(const std::string lastname) {
			_lastname = lastname;
		}
		void setNickname(const std::string nickname) {
			_nickname = nickname;
		}
		void setNumber(const std::string number) {
			_number = number;
		}
		void setSecret(const std::string secret) {
			_secret = secret;
		}
		std::string getFirstname( void ) const { return _firstname; }
		std::string getLastname( void ) const { return _lastname; }
		std::string getNickname( void ) const { return _nickname; }
		std::string getNumber( void ) const { return _number; }
		std::string getSecret( void ) const { return _secret; }
};

#endif