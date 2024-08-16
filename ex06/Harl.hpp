/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:31 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/16 14:04:19 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <cstdint>
class Harl
{
typedef void(Harl::*func_ptr)();
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    func_ptr func_ptrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

#endif