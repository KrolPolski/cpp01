/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:29:56 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 14:04:00 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    private:
    std::string name;
    Weapon *wpn;
public:
    HumanB(std::string my_name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& my_wpn);
};
#endif