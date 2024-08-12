/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:10:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 15:56:21 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Arguments must be provided as follows: <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string out_file = filename;
	out_file.append(".replace");

	std::ifstream in_file(filename);
	std::ofstream file(out_file);
	
	for (std::string line; std::getline(in_file, line);)
	{
		if line.find(s1) != std::npos;
	}
	std::cout << out_file << filename;
	file << "Your momma says" << " all kinds of stuff" << std::endl;
	file.close();
}