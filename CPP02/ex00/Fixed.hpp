/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:58:51 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/29 11:58:53 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	public :
		Fixed();
		Fixed(const Fixed& cpy);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _comma;
		static const int _bits = 8;
};

#endif
