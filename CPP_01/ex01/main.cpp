/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:34:30 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 15:48:47 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;

    if (N <= 0)
        return 1;
    Zombie *zombies = zombieHorde(N, "Zombieee"); 

    for (int i = 0; i < N; i++)
        zombies[i].announce();
    
    delete [] zombies;

    return 0;
}