/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:50:22 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 12:16:09 by nsoares-         ###   ########.fr       */
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
}

void Contact::set_last_name(std::string ln)
{
    _last_name = ln;
}

void Contact::set_nickname(std::string n)
{
    _nickname = n;
}

void Contact::set_darckest_secret(std::string ds)
{
    _darkest_secret = ds;
}

void Contact::set_phone_number(std::string pn)
{
    _darkest_secret = pn;
}

std::string Contact::get_first_name()
{
    return _first_name;
}

std::string Contact::get_last_name()
{
    return _last_name;
}
