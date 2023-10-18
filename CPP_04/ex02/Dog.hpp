/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:13 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/18 17:45:08 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{

    private:

        Brain* _brain;

    public:

        Dog();
        Dog(Dog const & src);
        Dog &operator=(Dog const &rhs);
        virtual ~Dog();

        void makeSound() const;
        void setIdea(int i, std::string idea);
        void printIdeas(int index) const;

};

#endif

// Virtual Destructors
/* This is important because if a derived class has any dynamically allocated memory
 or other resources, it needs to be freed when the object is destroyed. By making the 
 destructor virtual, the derived class's destructor will be called automatically when 
 the object is destroyed, ensuring that all of its resources are freed as well.*/