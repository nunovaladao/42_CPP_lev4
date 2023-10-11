/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:19 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/10 16:26:41 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
    std::cout << "Cat Copy constructor called" << std::endl;

    *this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
