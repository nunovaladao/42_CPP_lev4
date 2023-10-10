/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:03 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/10 10:53:03 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ScavTrap stA;
    FragTrap ftB("Jimmy");
    FragTrap ftC(ftB);

    stA.attack("Tom");

    std::cout << std::endl;

    ftB.attack("Billy");
    ftB.takeDamage(100);
    ftB.attack("Billy");

    std::cout << std::endl;

    ftC.highFivesGuys();
    ftC.beRepaired(1);
    ftC.takeDamage(90);
    ftC.beRepaired(10);
    ftC.takeDamage(20);
    ftC.highFivesGuys();

    return 0;
}