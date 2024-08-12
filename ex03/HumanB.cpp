/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:29:52 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 14:03:44 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string my_name)
{
    name = my_name;
}

HumanB::~HumanB()
{
    
}

void HumanB::attack()
{
  std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& my_wpn)
{
    wpn = &my_wpn;
}