/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:06:29 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/29 11:47:33 by ppitzini         ###   ########.fr       */
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
		Fixed &operator=(const Fixed& src);
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
	private:
		int value; //fix point
		static const int BITS = 8; //ou est la vigule
};

// Surcharge d'operateur pour changer sa fonction
std::ostream &operator<<(std::ostream& os, Fixed const &value);

#endif
