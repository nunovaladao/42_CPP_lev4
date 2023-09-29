/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:35:21 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 15:32:43 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

#include <iostream>
#include <string>


class Zombie
{
    private:

        std::string _name;

    public:

        Zombie();
        ~Zombie();

        void setNameZombie(std::string name);
        void announce( void );

};

Zombie* zombieHorde( int N, std::string name );

#endif