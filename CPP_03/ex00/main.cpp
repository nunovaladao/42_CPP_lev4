/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:03 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/09 17:46:32 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap ctA("Dino");
    ClapTrap ctB;
    ClapTrap ctC(ctA);

    ctA.attack("Hom");
    ctA.setAttack(100);
    ctA.attack("Hom");
    ctA.setAttack(5);
    ctA.attack("Hom");

    std::cout << std::endl;

    ctB.takeDamage(5);
    ctB.beRepaired(5);
    ctB.takeDamage(5);

    std::cout << std::endl;
    
    /* ctC.attack("Xico");
    ctC.setAttack(15);
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.takeDamage(6);
    ctC.setAttack(1);
    ctC.attack("Xico");
    ctC.beRepaired(4);
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.attack("Xico");
    ctC.takeDamage(7);
    ctC.beRepaired(5);
    ctC.takeDamage(2);
    ctC.attack("Xico"); */
    
    return 0;
}