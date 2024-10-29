/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:06:29 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/17 17:07:31 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed& cpy);
		Fixed(const int i_con);
		Fixed (const float f_con);
		~Fixed();
		Fixed& operator=(const Fixed& src);

		// FUNCTIONS
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		static Fixed min(const Fixed &i1, const Fixed &i2);
		static Fixed min(Fixed &i1, Fixed &i2);
		static Fixed max(const Fixed &i1, const Fixed &i2);
		static Fixed max(Fixed &i1, Fixed &i2);

		// SURCHARGE
		Fixed operator--();
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;

		// BOOL
		bool operator!=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
	private:
		int value;
		static const int BITS = 8;
};
std::ostream &operator<<(std::ostream& os, Fixed const &value);
#endif
