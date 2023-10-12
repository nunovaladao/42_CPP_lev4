/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:24:13 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/11 23:38:02 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
    return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs)
        _value = rhs.getRawBits();
    
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

    return ;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

const int Fixed::_fractionalBits = 8;