/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:18 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/10 16:25:15 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    std::cout << "Dog Copy constructor called" << std::endl;

    *this = src;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}