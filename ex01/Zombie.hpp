/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:25:11 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 15:29:31 by rboudwin         ###   ########.fr       */
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
    ~Zombie();
    void    announce(void);
    std::string get_name();
    void    set_name(std::string n);
};

Zombie* zombieHorde(int N, std::string name);
#endif