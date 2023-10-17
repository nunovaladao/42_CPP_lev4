/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:15 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/16 23:54:17 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
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