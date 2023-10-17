/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:41 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 13:47:13 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

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
        virtual void printIdeas(int index) const;

};

#endif