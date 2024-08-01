/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:49:55 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 15:41:12 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(5, "Mr. Zombie");
    
    for (int i = 0; i < 5; i++)
    {
        (horde[i]).announce();
        std::cout << "Pointer of horde[" << i << "] is " << &horde[i] << std::endl;
    }
    delete[] horde;
}