/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:08:50 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/29 00:11:35 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{

    private:

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:

        Harl();
        ~Harl();
        void complain( std::string level );

};


#endif