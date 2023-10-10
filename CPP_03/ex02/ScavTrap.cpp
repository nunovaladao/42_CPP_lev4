/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:23 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/09 20:00:32 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _name = "ScavT";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << _name << " ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << _name << " ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << src._name << " ScavTrap Copy constructor called" << std::endl; 

    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _attackDamage = rhs._attackDamage;
        _energyPoints = rhs._energyPoints;
        _hitPoints = rhs._hitPoints;
    }

    std::cout << rhs._name << " ScavTrap Copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints < 1)
        return ;
    if (_energyPoints < 1)
        std::cout << "ScavTrap " << _name << " don't have energy points!\n";
    else
    {
        if (_attackDamage < 1)
        {
            _energyPoints--;
            std::cout << "ScavTrap " << _name << " can't attack " << target << " without set attack! Lost 1 energy point anyway...\n";
        }
        else
        {
            _energyPoints--;
            std::cout << "ScavTrap " << _name << " attacks " << target;
            std::cout << ", causing " << _attackDamage << " points of damage!\n";
        }
    }
}

void ScavTrap::guardGate()
{
    if (_energyPoints < 1 || _hitPoints < 1)
        std::cout << "ScavTrap " << _name << " can't be in Gate keeper mode!\n";
    else
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!\n";
}