/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:03 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/29 12:26:54 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Wrong arguments!" << std::endl;
        std::cerr << "Usage: ./replace <filename> <old_str> <new_str>" << std::endl;
        return 1;
    }
    else if (std::string(av[1]).empty() || std::string(av[2]).empty() || std::string(av[3]).empty())
    {
        std::cout << "Args can't be empty!" << std::endl;
        return 1;
    }
    
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream file(filename); // fluxo de entrada de arquivo
    if (!file.is_open())
    {
        std::cerr << "File error: "  << filename << std::endl;
        return 1;
    }
    
    std::string file_replace;
    file_replace = filename.append(".replace");
    std::ofstream file2(file_replace); // fluxo de saída de arquivo
    if (!file2.is_open())
    {
        std::cerr << "File error: " << file_replace << std::endl;
        return 1;
    }

    std::string txt;
    while (getline(file, txt))
    {
        size_t index_found = txt.find(s1);
        while (index_found != std::string::npos) // Enquanto não encontrar a substring na string
        {
            txt.erase(index_found, s1.size());
            txt.insert(index_found, s2);
            index_found = txt.find(s1, index_found + s2.size()); // Atualiza a próxima ocorrência
        }
        file2 << txt << std::endl;
    }

    file.close();
    file2.close();

    return 0;
}


// Test!! Create a file with this text to verify...

/* s1Using s1 functions is forbidden a will s1 be considered cheating.
the member functions of s1 the are alls1s1owed, except s1.
wisely s1!s1      s1
s1 */