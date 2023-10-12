/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:55:03 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/12 15:11:58 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << std::endl;
    
    // Add more tests
    std::cout << "\nMore tests" << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << "Value of true: " << true << std::endl;
    std::cout << "Value of false: " << false << std::endl;
    std::cout << "a != b: " << ( a != b ) << std::endl;
    std::cout << "a == b: " << ( a == b ) << std::endl;
    std::cout << "a < b: " << ( a < b ) << std::endl;
    std::cout << "a > b: " << ( a > b ) << std::endl;
    std::cout << "a >= b: " << ( a >= b ) << std::endl;
    std::cout << "a <= b: " << ( a <= b ) << std::endl;
    Fixed c(4);
    Fixed d(2);
    std::cout << "c / d: " << ( c / d ) << std::endl;
    std::cout << "c * d: " << ( c * d ) << std::endl;
    std::cout << "c - d: " << ( c - d ) << std::endl;
    std::cout << "c + d: " << ( c + d ) << std::endl;

    return 0;
}