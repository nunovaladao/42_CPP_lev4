/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:41 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/16 14:53:02 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{

    protected:

        std::string _type;

    public:

        AAnimal();
        AAnimal(AAnimal const & src);
        AAnimal &operator=(AAnimal const &rhs);
        virtual ~AAnimal();

        std::string getType( void ) const;
        virtual void makeSound() const = 0;
        virtual void printIdeas(int index) const;

};

#endif