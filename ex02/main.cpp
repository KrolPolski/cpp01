/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:10:14 by rboudwin          #+#    #+#             */
/*   Updated: 2024/08/01 17:15:28 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "The memory address of str is " << &str << std::endl;
    std::cout << "The memory address of stringPTR is " << &stringPTR << std::endl;
    std::cout << "The memory address of stringREF is " << &stringREF << std::endl;
    std::cout << "The value of str is " << str << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "the value pointedd to by stringREF is " << stringREF << std::endl;
    
}