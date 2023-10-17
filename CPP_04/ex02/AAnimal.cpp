/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:58:52 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/16 23:52:39 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("")
{
    std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;

    *this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
    std::cout << "AAnimal Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType( void ) const
{
    return _type;
}

void AAnimal::printIdeas(int index) const
{
    (void)index;
    std::cout << "This animal have no ideas!" << std::endl;
}