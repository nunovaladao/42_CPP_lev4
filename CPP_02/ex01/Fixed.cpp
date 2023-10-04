/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:24:13 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/03 19:44:58 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// **************  Default Constructor  **************
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;

    return ;
}

// **************  Constructors  **************
Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _value = nb * (1 << _fractionalBits);
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;

    _value = (int)(roundf(nb * (1 << _fractionalBits)));
}

// **************  Copy Constructor  **************
Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
    return ;
}

// **************  Copy assignment Constructor  **************
Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;

    _value = rhs.getRawBits();
    return *this;
}

// **************  Destructor  **************
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

    return ;
}

// **************  Member Functions  **************
float Fixed::toFloat( void ) const
{
    float value = (float)_value / (1 << _fractionalBits);
    return value;
}

int Fixed::toInt( void ) const
{
    int value = _value / (1 << _fractionalBits);
    return value;
}

int Fixed::getRawBits( void ) const
{
    return _value;
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
}

// **************  Operator  **************
std::ostream &operator<<( std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}