/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:41 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/18 17:04:51 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

    protected:
        std::string _type;

    public:
        Animal();
        Animal(Animal const & src);
        Animal &operator=(Animal const &rhs);
        virtual ~Animal();

        std::string getType( void ) const;
        virtual void makeSound() const;

};

#endif