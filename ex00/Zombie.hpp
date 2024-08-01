/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:25:11 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 15:00:50 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
private:
    std::string name;
    
public:
    void    announce(void);
    std::string get_name();
    void    set_name(std::string n);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif