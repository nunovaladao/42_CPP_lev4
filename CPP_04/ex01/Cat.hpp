/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:15 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 13:48:54 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{

    private:

        Brain* _brain;

    public:

        Cat();
        Cat(Cat const & src);
        Cat &operator=(Cat const &rhs);
        virtual ~Cat();

        void makeSound() const;
        void setIdea(int i, std::string idea);
        void printIdeas(int index) const;

};

#endif