/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:45:32 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 18:27:34 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main()
{
    Phonebook phonebook;
    std::string cmd;

    do
    {
        system("clear");
        phonebook.show_menu();
        getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.add_contact();
        else if (cmd == "SEARCH")
            phonebook.search_contact();
        else if (cmd == "EXIT")
            continue ;
        else if (cmd.empty() || cmd != "SEARCH" || cmd != "ADD")
        {
            system("clear");
            std::cout << "Command invalid!" << std::endl;
            wait_enter();
        }
    } while (cmd != "EXIT");
    
    
    return 0;
}