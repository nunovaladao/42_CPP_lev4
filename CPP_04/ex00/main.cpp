/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:54:10 by nsoares-          #+#    #+#             */
/*   Updated: 2023/10/13 16:39:10 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound();

    // Add more tests

    std::cout << std::endl << "--- Add more tests ---" << std::endl << std::endl;

    const WrongAnimal* animal = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    const Animal* a = new Dog();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;

    a->makeSound(); // This will output the Dog sound
    std::cout << "ERROR --> ";
    c->makeSound();  // This will output the WrongAnimal sound
    animal->makeSound(); // This will output the WrongAnimal sound

    delete meta;
    delete j;
    delete i;
    delete animal;
    delete c;
    delete a;

    return 0;
}