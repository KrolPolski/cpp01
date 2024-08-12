/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:30:12 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 13:55:56 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
    const std::string &ret = Weapon::type;
    return ret;
}

void Weapon::setType(std::string str)
{
    type = str;
}


Weapon::Weapon(std::string wpn_type)
{
    type = wpn_type;
}

Weapon::Weapon()
{
    type = "";
}

Weapon::~Weapon()
{
}