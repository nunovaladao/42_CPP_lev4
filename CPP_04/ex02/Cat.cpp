/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:19 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 00:03:20 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    
    //*this = src;
    _type = src._type;
    _brain = new Brain(*src._brain);
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
        if (_brain)
            delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::printIdeas(int index) const
{
    std::cout << "(Cat idea) " << _brain->ideas[index];
}

void Cat::setIdea(int index, std::string idea)
{
    _brain->ideas[index] = idea;
}

void Cat::makeSound() const
{
    std::cout << "meow meow\n";
}
