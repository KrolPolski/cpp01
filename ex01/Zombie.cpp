/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:25:06 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/20 09:42:08 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void   Zombie::announce(void)
{
    std::cout << name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
    return name;
}

void    Zombie::set_name(std::string n)
{
    name = n;    
}

Zombie::Zombie()
{    
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed with extreme prejudice" << std::endl;
}