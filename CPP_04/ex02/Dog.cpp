/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:18 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 00:03:09 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
    std::cout << "Dog Copy constructor called" << std::endl;

    _type = src._type;
    //_brain = src._brain; // shallow copy -> same pointer
    _brain = new Brain(*src._brain); // deep copy -> independent copy
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
        delete _brain;
        _brain = new Brain(*rhs._brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::printIdeas(int index) const
{
    std::cout << "(Dog idea) " << _brain->ideas[index];
}

void Dog::setIdea(int index, std::string idea)
{
    _brain->ideas[index] = idea;
}

void Dog::makeSound() const
{
    std::cout << "owf owf\n";
}