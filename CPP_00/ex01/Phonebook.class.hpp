/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:19 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 19:31:51 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

class Phonebook
{
    private:
        Contact _contacts[8];
        int _i;
        //int _len_list;

    public:
    
        Phonebook();
        ~Phonebook();

    void show_menu();
    void add_contact();
    void search_contact();

};

std::string write_cmd(std::string str);
bool see_spaces(std::string str);
std::string rmv_spaces(std::string str);
void wait_enter();


#endif