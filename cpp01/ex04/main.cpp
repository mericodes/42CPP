/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:54:49 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/05/17 19:39:27 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_strings(std::string line, std::string s1, std::string s2)
{
	std::string newLine;
	size_t		size;

	size = line.find(s1);
	if (size == std::string::npos)
		return (line);
	newLine = line.substr(0, size) + s2 + 
				line.substr(size + s1.length(),line.length() - s1.length() - size);
	return (newLine);
}

int	main(int argc, char *argv[])
{
	if (argc != 4 || !std::string(argv[2]).length() || !std::string(argv[3]).length() || !std::string(argv[1]).length())
	{
		std::cout << "Please write three arguments: <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}
	
	std::ifstream infile;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	infile.open(argv[1], std::ios_base::in);
	std::ofstream outfile;
	outfile.open(std::string(argv[1]) + ".replace", std::ios_base::out);
	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << argv[1] << ": Error opening file" << std::endl;
		return (1);
	}
	std::string line;
	while (getline(infile, line))
	{
		line = replace_strings(line, s1, s2);
		outfile << line << std::endl;
	}
}
