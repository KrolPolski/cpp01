/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:10:49 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 16:34:46 by rboudwin         ###   ########.fr       */
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
	std::string out_filename = filename;
	out_filename.append(".replace");

	std::ifstream in_file(filename);
	if (!in_file.is_open())
	{
		std::cout << "Could not open file: " << filename << std::endl;
		return (1);
	}
	std::ofstream out_file(out_filename);
	if (!out_file.is_open())
	{
		std::cout << "Could not create or open file: " << out_filename << std::endl;
		return (1);
	}
	for (std::string line; std::getline(in_file, line);)
	{
		size_t suspect;
		suspect = line.find(s1);
		while (suspect != std::string::npos)
		{
			line.erase(suspect, s1.length());
			line.insert(suspect, argv[3]);
			suspect = line.find(s1);
		}
		out_file << line << std::endl;
	}
	out_file.close();
	in_file.close();

	// still needs to handle bad files and bad permissions. 
}