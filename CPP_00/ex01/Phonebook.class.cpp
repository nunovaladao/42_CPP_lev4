/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:32:01 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/23 15:06:41 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook() : _i(-1), _len_list(0)
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
    std::cout << "*  - ADD 📞                *" << std::endl;
    std::cout << "*  - SEARCH 🔍             *" << std::endl;
    std::cout << "*  - EXIT ❌               *" << std::endl;
    std::cout << "****************************" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Enter a command: ";
}

void Phonebook::add_contact()
{
    _i++;
    
    if (_len_list < 8)
        _len_list++;
    if (_i == 8)
        _i = 0;
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
    int i;
    int index;
    std::string str;
    
    system("clear");
    if (_len_list == 0)
    {
        std::cout << "Your list of contacts is empty!" << std::endl;
        wait_enter();
        return ;
    }
    std::cout << std::endl;
    std::cout << "* * * * * * * * Phonebook * * * * * * * * * \n" << std::endl;
    std::cout << "--------------------------------------------\n" << std::endl;
    std::cout << "     Index|   F. Name|   L. Name|  Nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    i = -1;
    while (++i < _len_list)
    {
        std::cout << std::setw(10) << i + 1 << '|';
        std::cout << std::setw(10) << trunc_str(_contacts[i].get_first_name()) << '|';
        std::cout << std::setw(10) << trunc_str(_contacts[i].get_last_name()) << '|';
        std::cout << std::setw(10) << trunc_str(_contacts[i].get_nickname()) << '|';
        std::cout << std::endl;
        std::cout << "--------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter a contact index (Range: 1 - " << _len_list << "): ";
    while (str.size() != 1 || str[0] - '0' > _len_list || str[0] <= '0')
    {
        if (see_spaces(str) || str[0] - '0' > _len_list || str[0] <= '0')
            std::cout << "Try another contact index! This one doesn't exist...\n";
        getline(std::cin, str);
    }
    index = str[0] - '0' - 1;
    get_contact(index);
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
        getline(std::cin, cmd);
    }
    return rmv_spaces(cmd);
}

void Phonebook::get_contact(int index)
{
    system("clear");
    std::cout << std::endl;
    std::cout << "* * * * * * * * Phonebook * * * * * * * * * \n" << std::endl;
    std::cout << "Contact: " << index + 1 << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << "First Name: " << _contacts[index].get_first_name() << std::endl;
    std::cout << "Last Name: " << _contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << _contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number: " << _contacts[index].get_phone_number() << std::endl;
    std::cout << "Darckest Secret: " <<_contacts[index].get_darckest_secret() << std::endl;
}

std::string trunc_str(std::string str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == '\t')
            str[i] = ' ';

    if (str.size() > 10)
    {
        str = str.substr(0, 9);
        str = str += ".";
    }
    return str;
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
