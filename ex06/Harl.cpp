/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:36 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/16 14:26:31 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]\nI love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

/* Hey here is doc*/
void Harl::warning( void )
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == complaints[i])
        {
            (this->*func_ptrs[i])();
            return ;
        }
    }
    std::cout << "Invalid complaint level: " << level << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}