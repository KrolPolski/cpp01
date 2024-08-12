/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:30:17 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/12 13:55:52 by rboudwin         ###   ########.fr       */
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
    Weapon(std::string wpn_type);
    Weapon();
    ~Weapon();
    const std::string& getType() const;
    void    setType(std::string str);
};

#endif