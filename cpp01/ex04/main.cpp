/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:57:43 by inshin            #+#    #+#             */
/*   Updated: 2022/01/22 05:17:44 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return 0;
	}
	std::string fileName = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];
	if (fileName.empty() || str1.empty() || str2.empty())
	{
		std::cout << "Empty arguments" << std::endl;
		return 0;
	}
	std::ifstream openFile(fileName);
	std::string extension = ".replace";
	if (openFile.is_open())
	{
		std::ofstream writeFile(fileName + extension);
		std::string line;
		std::string::size_type found;
		while (getline(openFile, line))
		{
			while (true)
			{
				found = line.find(str1);
				if (found == std::string::npos)
					break;
				line.erase(found, str1.size());
				line.insert(found, str2);
			}
			writeFile << line << std::endl;
		}
		writeFile.close();
	}
	openFile.close();
	return 0;
}
