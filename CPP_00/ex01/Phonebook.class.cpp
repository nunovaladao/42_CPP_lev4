/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:32:01 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 12:35:13 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook() /* : _i(0), _len_list(0) */
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
    int i = 1;
    
    _contacts[i].set_first_name(write_cmd("First Name: "));
    _contacts[i].set_last_name(write_cmd("Last Name: "));
    _contacts[i].set_nickname(write_cmd("Nickname: "));
    _contacts[i].set_phone_number(write_cmd("Phone Number: "));
    _contacts[i].set_darckest_secret(write_cmd("Darckest Secret: "));

    system("clear");
    std::cout << "The contact was added succesfully!\n" << std::endl;
    wait_enter();
}

void Phonebook::search_contact()
{
    //int i = 1
    system("clear");
    std::cout << _contacts[1].get_first_name() << std::endl;
    wait_enter();
    return ;
}

std::string write_cmd(std::string str)
{
    std::string cmd;

    while (cmd.empty())
    {
        system("clear");
        std::cout << "Add a new contact (no empty fields)!\n" << std::endl;
        std::cout << str;
        std::getline(std::cin, cmd);
    }
    return cmd;
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
