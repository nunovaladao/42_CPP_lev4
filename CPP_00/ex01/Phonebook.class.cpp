/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:32:01 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 20:26:43 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook() : _i(0)/* , _len_list(0)  */
{
    return ;
}

Phonebook::~Phonebook()
{
    system("clear");
    std::cout << "\nYou exited the PhoneBook! 📞\n\n";
    return ;
}

void Phonebook::show_menu()
{
    std::cout << std::endl;
    std::cout << "****** Phonebook Menu ******" << std::endl;
    std::cout << "*   - ADD 📞               *" << std::endl;
    std::cout << "*   - SEARCH 🔍            *" << std::endl;
    std::cout << "*   - EXIT ❌              *" << std::endl;
    std::cout << "****************************" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Enter a command: ";
}

void Phonebook::add_contact()
{
    _i = 0;
    _i++;
    
    if (_i == 9)
        _i = 1;
    
    _contacts[_i].set_first_name(write_cmd("First Name: "));
    _contacts[_i].set_last_name(write_cmd("Last Name: "));
    _contacts[_i].set_nickname(write_cmd("Nickname: "));
    _contacts[_i].set_phone_number(write_cmd("Phone Number: "));
    _contacts[_i].set_darckest_secret(write_cmd("Darckest Secret: "));

    system("clear");
    std::cout << "The contact was added succesfully!\n" << std::endl;
    wait_enter();
}

void Phonebook::search_contact()
{
    system("clear");
    if (_i == 0)
    {
        std::cout << "Your list of contacts is empty!" << std::endl;
        wait_enter();
        return ;
    }
    std::cout << _contacts[1].get_first_name() << std::endl;
    std::cout << _contacts[1].get_last_name() << std::endl;
    std::cout << _contacts[1].get_nickname() << std::endl;
    std::cout << _contacts[1].get_phone_number() << std::endl;
    std::cout << _contacts[1].get_darckest_secret() << std::endl;
    wait_enter();
    return ;
}

std::string write_cmd(std::string str)
{
    std::string cmd;

    while (cmd.empty() || see_spaces(cmd))
    {
        system("clear");
        std::cout << "Add a new contact (no empty fields)!\n" << std::endl;
        std::cout << str;
        std::getline(std::cin, cmd);
    }
    return rmv_spaces(cmd);
}

bool see_spaces(std::string str)
{
    for (int i = 0; i < (int)str.length(); i++)
        if (!std::isspace(str[i]))
            return false;
    return true;
}

std::string rmv_spaces(std::string str)
{
    int i = 0;
    
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    return (str.substr(i, str.length() - i));
}

void wait_enter()
{
    std::cout << std::endl;
    std::cout << "Press Enter to continue..." << std::endl;
    std::cout << std::endl;
    while (1)
    {
        if (std::cin.get())
            break;
    }
}
