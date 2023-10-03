/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:24:08 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/01 17:05:44 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

    public:

        Fixed();
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &rhs);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:

        int _value;
        static const int _fractionalBits;
    
};


#endif