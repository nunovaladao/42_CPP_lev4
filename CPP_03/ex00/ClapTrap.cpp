/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:34:01 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/06 15:02:47 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapT"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
    return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs)
    {
        _name = rhs._name;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _hitPoints = rhs._hitPoints;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 10)
        std::cout << "You can't attack without take damage!\n";
    else if (_energyPoints < 1)
        std::cout << "You don't have energy points!\n";
    else if (_hitPoints < 0)
        std::cout << "You can't attack " << target << " with 0 hit points!\n";
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints < 1)
        std::cout << "You don't have energy points!\n";
    else if (_hitPoints < 1)
        std::cout << "You can't attack a ClapTrap with 0 hit points!\n";
    else
    {
        _energyPoints -= 1;
        _attackDamage = amount;
        _hitPoints -= _attackDamage;
        
        std::cout << "ClapTrap " << _name << " attacks with " << amount << " damage points!\n";
    }
}

/* void ClapTrap::beRepaired(unsigned int amount)
{
    
}  */