/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:56:17 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/10 10:58:49 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "animal.hpp"

class Brain{
	public :
		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& src);
		~Brain();
	private:
		std::string ideas[100];
};


#endif
