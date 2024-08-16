/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:26 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/16 14:23:22 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    enum Level {DEBUG, INFO, WARNING, ERROR};
    Level level;
    Harl dude;
    
    if (argc < 2)
    {
        dude.complain("DEBUG");
        dude.complain("INFO");
        dude.complain("WARNING");
        dude.complain("ERROR");
        return (0);
    }
    if (argc > 2)
    {
        std::cout << "Too many arguments provided. Please provide one complaint level (DEBUG, INFO, WARNING, or ERROR)" << std::endl;
        return (1);
    }
    
    std::string req_level = argv[1];
    
    std::string complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (req_level == complaints[0])
        level = DEBUG;
    else if (req_level == complaints[1])
        level = INFO;
    else if (req_level == complaints[2])
        level = WARNING;
    else if (req_level == complaints[3])
        level = ERROR;
    switch (level)
    {
        case DEBUG:
            dude.complain("DEBUG");
            dude.complain("INFO");
            dude.complain("WARNING");
            dude.complain("ERROR");
            return (0);
        case INFO:
            dude.complain("INFO");
            dude.complain("WARNING");
            dude.complain("ERROR");
            return (0);
        case WARNING:
            dude.complain("WARNING");
            dude.complain("ERROR");
            return (0);
        case ERROR:
            dude.complain("ERROR");
            return (0);
        default:
            std::cout << "Invalid complaint level. Try again" << std::endl;
        
        
    }
}