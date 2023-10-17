/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:58:52 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/16 13:08:49 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal Copy constructor called" << std::endl;

    *this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType( void ) const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "Animal make a sound\n";
}

void Animal::printIdeas(int index) const
{
    (void)index;
    std::cout << "This animal have no ideas!" << std::endl;
}