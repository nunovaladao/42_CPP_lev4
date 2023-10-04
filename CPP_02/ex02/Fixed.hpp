/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:24:08 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/04 11:09:28 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

    public:

        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed operator++(int);
        Fixed &operator++();

        Fixed &operator=(Fixed const &rhs);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    private:

        int _value;
        static const int _fractionalBits = 8;
    
};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs);

#endif