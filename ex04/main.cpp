/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:01:37 by svogrig           #+#    #+#             */
/*   Updated: 2025/02/20 13:32:18 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

std::string replaceSubstring(const std::string& input, const std::string& search, const std::string& replace)
{
	std::string	result;
	size_t		pos = 0;
	size_t		posSearch = input.find(search);
	while (posSearch != std::string::npos)
	{
		result.append(input, pos, posSearch - pos);
		result.append(replace);
		pos = posSearch	+ search.length();
		posSearch = input.find(search, pos);
	}
	result.append(input, pos, input.length() - pos);
	return (result);
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << RED "Error:" YELLOW " wrong number of arguments !" RESET << std::endl;
		std::cerr << YELLOW "Usage: "  RESET << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (EXIT_FAILURE);
	}

	// open input file
	char* inputFilename = argv[1];
	std::ifstream inputFile(inputFilename);
	if (!inputFile.is_open())
	{
		std::cerr << RED "Error:"  YELLOW " can't open file: " RESET << inputFilename << std::endl;
		return (EXIT_FAILURE);
	}

	// open output file
	std::string outputFilename = inputFilename;
	outputFilename.append(".replace");
	std::ofstream outputFile(outputFilename.c_str());
	if(!outputFile.is_open())
	{
		std::cerr << RED "Error:"  YELLOW " can't open file: " RESET << argv[1] << std::endl;
		return (EXIT_FAILURE);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// load input file
	std::string inputContent;
	std::getline(inputFile, inputContent, '\0');
	inputFile.close();

	// fill output file
	outputFile << replaceSubstring(inputContent, s1, s2);
	outputFile.close();

	return (EXIT_SUCCESS);
}
