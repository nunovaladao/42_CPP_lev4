/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:34:28 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 18:22:33 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    ;
}

Weapon::~Weapon()
{
    ;
}

std::string const& Weapon::getType() const
{
    return _type;
}

void Weapon::setType(std::string newType)
{
    _type = newType;
}