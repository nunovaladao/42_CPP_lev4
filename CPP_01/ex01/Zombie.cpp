/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:35:09 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 15:32:59 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    ;
}

Zombie::~Zombie()
{
    std::cout << _name << ": Zombie destroyed!" << std::endl;
}

void Zombie::setNameZombie(std::string name)
{
    _name = name;
} 

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}