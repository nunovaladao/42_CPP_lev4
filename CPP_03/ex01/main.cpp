/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:03 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/09 20:00:48 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main( void )
{
    ScavTrap stA;
    ScavTrap stB("Xico");
    ScavTrap stC(stB);

    stA.attack("Hom");
    stA.beRepaired(12);
    stA.takeDamage(100);

    std::cout << std::endl;

    stB.takeDamage(50);
    stB.beRepaired(50);
    stB.takeDamage(50);
    stB.takeDamage(50);
    
    std::cout << std::endl;

    stC.attack("James");
    stC.takeDamage(60);
    stC.guardGate();
    stC.takeDamage(30);
    stC.guardGate();
    stC.takeDamage(10);
    stC.guardGate();

    return 0;
}