/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:10 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/17 22:29:50 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animal[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    
    std::cout << "\n\n\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Animal: " << animal[i]->getType() << " -> ";
        animal[i]->printIdeas(i);
        std::cout << " | ";
    }
    
    std::cout << "\n\n\n";

    for (int i = 0; i < 10; i++)
        delete animal[i];

    std::cout << "\n\n\n";

    // SOME TESTS

    Dog dog1;
    Dog dog2(dog1);

    dog1.setIdea(0, "Dog1\n");
    dog1.printIdeas(0);
    dog2.printIdeas(0);
    std::cout << "\n";

    std::cout << "\n\n";

    Cat cat1;
    Cat cat2;
    cat2 = cat1;

    return 0;
}