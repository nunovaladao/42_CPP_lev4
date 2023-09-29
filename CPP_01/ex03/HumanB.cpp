/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:26:32 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 22:00:48 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &type)
{
    _type = &type;
}

void HumanB::attack() const
{
    if (_type)
        std::cout << _name <<  " attacks with their " << _type->getType() << std::endl;
}
