/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:08:28 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 22:32:39 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "random idea";
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &rhs)
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}