/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:30:17 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/05 10:42:58 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(/* args */);
    ~Weapon();
    const &std::string getType();
    void    setType(std::string str);
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

#endif