/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbruma <sbruma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:59:36 by sbruma            #+#    #+#             */
/*   Updated: 2025/01/21 18:59:37 by sbruma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string command;

    std::cout << "Welcome to my Awesome PhoneBook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
    while(1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            //function to do add
        }
        else if (command == "SEARCH")
        {
            //function to do search
        }
        else if (command == "EXIT")
        {
            std::cout << "Bye! Bye! We're closing shop!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command! Try using: ADD, SEARCH, EXIT" << std::endl;
        }
    }
    return 0;
}
