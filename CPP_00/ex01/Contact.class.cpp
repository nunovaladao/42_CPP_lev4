/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:22 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/23 14:37:51 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return ;
}

void Contact::set_first_name(std::string fn)
{
    _first_name = fn;
    return ;
}

void Contact::set_last_name(std::string ln)
{
    _last_name = ln;
    return ;
}

void Contact::set_nickname(std::string n)
{
    _nickname = n;
    return ;
}

void Contact::set_darckest_secret(std::string ds)
{
    _darkest_secret = ds;
    return ;
}

void Contact::set_phone_number(std::string pn)
{
    _phone_number = pn;
    return ;
}

std::string Contact::get_first_name()
{
    return _first_name;
}

std::string Contact::get_last_name()
{
    return _last_name;
}

std::string Contact::get_nickname()
{
    return _nickname;
}

std::string Contact::get_phone_number()
{
    return _phone_number;
}

std::string Contact::get_darckest_secret()
{
    return _darkest_secret;
}
