/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:50:10 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 19:26:28 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{

}

HumanA::~HumanA()
{
    
}

void HumanA::attack() const
{
    std::cout << _name <<  " attacks with their " << _type.getType() << std::endl;
}