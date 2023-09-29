/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:35:21 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 11:10:12 by nsoares-         ###   ########.fr       */
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

        Zombie(std::string z_name);
        ~Zombie();

        void announce( void );

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif