/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:49:47 by nsoares-          #+#    #+#             */
/*   Updated: 2023/09/27 21:59:19 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{

    private:

        std::string _name;
        Weapon *_type;

    public:

        HumanB(std::string name);
        ~HumanB();


        void setWeapon(Weapon &type);
        void attack() const;
};


#endif