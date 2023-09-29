/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:09:47 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/29 12:05:50 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    ;
}

Harl::~Harl()
{
    ;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    // Define um array de ponteiros 
    void (Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*func[i])(); // ponteiro para a função
}

void Harl::debug( void )
{
    std::cout << "(DEBUG)" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
    std::cout << "(INFO)" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldnt be asking for more!\n";
}

void Harl::warning( void )
{
    std::cout << "(WARNING)" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
    std::cout << "(ERROR)" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}