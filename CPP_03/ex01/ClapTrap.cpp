/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:34:01 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/09 18:18:18 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapT"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << _name << " ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << _name << " ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << src._name << " ClapTrap Copy constructor called" << std::endl;

    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << rhs._name << " ClapTrap Copy assignment operator called" << std::endl;

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
    std::cout << _name << " ClapTrap Destructor called" << std::endl;
}

void ClapTrap::setAttack(unsigned int attack)
{
    _attackDamage = attack;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints < 1)
        return ;
    if (_energyPoints < 1)
        std::cout << "ClapTrap " << _name << " don't have energy points!\n";
    else
    {
        if (_attackDamage < 1)
        {
            _energyPoints--;
            std::cout << "ClapTrap " << _name << " can't attack " << target << " without set attack! Lost 1 energy point anyway...\n";
        }
        else
        {
            _energyPoints--;
            std::cout << "ClapTrap " << _name << " attacks " << target;
            std::cout << ", causing " << _attackDamage << " points of damage!\n";
        }
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints >= 1)
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " take " << amount << " damage points!\n";
    }
    if (_hitPoints < 1)
        std::cout << "ClapTrap " << _name << " take too much damage and died!\n";

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints < 1)
        std::cout << "ClapTrap " << _name << " don't have energy points!\n";
    else if (_hitPoints < 1)
        std::cout << "ClapTrap " << _name << " try to repair but is already dead!\n";
    else if (amount + _hitPoints >= 100)
    {
        std::cout << "ClapTrap " << _name << " repair and have full health!\n";
        _hitPoints = 100;
        _energyPoints--;
    }
    else
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repair itself with " << amount << " points!\n";
    }
} 