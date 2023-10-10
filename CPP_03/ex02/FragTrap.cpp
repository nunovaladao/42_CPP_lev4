/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:11:24 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/10 10:38:56 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _name = "FragT";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << _name << " FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << _name << " FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
    std::cout << src._name << " FragTrap Copy constructor called" << std::endl; 

    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _hitPoints = rhs._hitPoints;
    }

    std::cout << rhs._name << " FragTrap Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << _name << " FragTrap Destructor called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    if (_energyPoints < 1 || _hitPoints < 1)
        std::cout << _name << " can't give High Fives!\n";
    else
        std::cout << _name << " give High Fives!\n";
}