/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:06:36 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/17 17:09:08 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
};

Fixed::Fixed(const int i_con)
{
	this->value = i_con << BITS;
};

Fixed::Fixed(const float f_con)
{
	this->value = roundf(f_con * (1 << BITS));
}

Fixed::~Fixed()
{
};

Fixed::Fixed(const Fixed& cpy)
{
	this->value = cpy.value;
}

Fixed &Fixed::operator=(const Fixed& src)
{
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

float Fixed::toFloat( void ) const
{
	return((float)value / (1 << BITS));
}

int Fixed::toInt( void ) const
{
	return (this->value >> BITS);
}

bool Fixed::operator==(const Fixed& other)
{
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other)
{
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other)
{
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other)
{
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& other)
{
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& other)
{
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

std::ostream &operator<<(std::ostream& os, Fixed const &value)
{
	os << value.toFloat();
	return (os);
}

Fixed Fixed::min(const Fixed &i1, const Fixed &i2)
{
	if (i1.getRawBits() < i2.getRawBits())
		return (i1);
	return (i2);
}

Fixed Fixed::min(Fixed &i1, Fixed &i2)
{
	if (i1.getRawBits() < i2.getRawBits())
		return (i1);
	return (i2);
}

Fixed Fixed::max(Fixed &i1, Fixed &i2)
{
	if (i1.getRawBits() > i2.getRawBits())
		return (i1);
	return (i2);
}

Fixed Fixed::max(const Fixed &i1, const Fixed &i2)
{
	if (i1.getRawBits() > i2.getRawBits())
		return (i1);
	return (i2);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}


Fixed Fixed::operator-(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
	}

Fixed Fixed::operator+(const Fixed& other) const
{
	return(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator--()
{
	value--;
	return (*this);
}
Fixed Fixed::operator++()
{
	value++;
	return (*this);
};

Fixed Fixed::operator++(int)
{
	Fixed   tmp(*this);
	operator++();
	return (tmp);
};


Fixed Fixed::operator--(int)
{
	Fixed   tmp(*this);
	operator--();
	return (tmp);
};
