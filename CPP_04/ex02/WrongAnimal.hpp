/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:45:43 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/18 17:45:11 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{

    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal &operator=(WrongAnimal const &rhs);
        ~WrongAnimal();

        std::string getType( void ) const;
        void makeSound() const;

};

#endif