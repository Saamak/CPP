/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:06:36 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/29 11:54:25 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int i_con)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = i_con << BITS;
};

Fixed::Fixed(const float f_con)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f_con * (1 << BITS));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = cpy.value;
}

Fixed &Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}

int Fixed::getRawBits( void ) const
{
	return (value);
}

float Fixed::toFloat( void ) const // fix to float
{
	return((float)value / (1 << BITS));
}

int Fixed::toInt( void ) const //fix to int
{
	return (this->value >> BITS);
}

std::ostream &operator<<(std::ostream& os, Fixed const &value)
{
	os << value.toFloat();
	return (os);
}
