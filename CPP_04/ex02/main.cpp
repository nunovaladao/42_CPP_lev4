/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:10 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 00:21:14 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    //AAnimal test;
    //AAnimal* test = new AAnimal();
    //AAnimal* test = new Dog();
    
    AAnimal* a[4];
    
    for (int i = 0; i < 4; i++)
        i % 2 == 0 ? a[i] = new Dog() : a[i] = new Cat();

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal: " << a[i]->getType() << " -> ";
        a[i]->printIdeas(i);
        std::cout <<  " | ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
        delete a[i];

    return 0;
}