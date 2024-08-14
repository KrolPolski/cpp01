/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:26 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/14 14:37:00 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl dude;
    dude.complain("DEBUG");
    dude.complain("INFO");
    dude.complain("WARNING");
    dude.complain("ERROR");
    dude.complain("INVALID");
    dude.complain("");
}