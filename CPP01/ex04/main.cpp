/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:14:53 by ppitzini          #+#    #+#             */
/*   Updated: 2024/10/17 16:44:10 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Error, program need 3 Arguments (filename, str1, str2)" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	if (str1.empty()) {
		std::cerr << "Error, str1 should not be empty" << std::endl;
		return 1;
	}

	std::ifstream input(filename);
	if (!input) {
		std::cerr << "Failed to open " << filename << std::endl;
		return 1;
	}
	std::ostringstream buffer;
	buffer << input.rdbuf();
	std::string content = buffer.str();
	std::cout << content << std::endl;

	size_t pos = 0;
	while ((pos = content.find(str1, pos)) != std::string::npos)
	{
		content.erase(pos, str1.length());
		content.insert(pos, str2);
		pos += str2.length();
    }
	std::cout << content << std::endl;
	std::ofstream output(filename + ".replace");
	if (!output)
	{
		std::cerr << "Failed to open " << filename << ".replace\n";
		return 1;
	}
	output << content;
	return 0;
}

