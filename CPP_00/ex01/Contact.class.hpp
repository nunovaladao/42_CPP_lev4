/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:46:51 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/22 12:16:21 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <cctype>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _darkest_secret;
        std::string _phone_number;

    public:

        Contact();
        ~Contact();
        
        void set_first_name(std::string);
        void set_last_name(std::string);
        void set_nickname(std::string);
        void set_darckest_secret(std::string);
        void set_phone_number(std::string);
        std::string get_first_name();
        std::string get_last_name();
        /* std::string get_nickname();
        std::string get_darckest_secret();
        std::string get_phone_number(); */
};


#endif