/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:34:30 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 12:29:21 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("Foo");
    zombie.announce();

    Zombie *zombie2 = newZombie("Zombada");
    zombie2->announce();
    
    randomChump("Zombino");

    delete zombie2;

    return 0;
}