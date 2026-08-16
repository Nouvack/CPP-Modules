/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:07:19 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/14 17:12:06 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef UTILS_HPP
# define UTILS_HPP
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

bool isValidText(std::string text);
bool isValidPhone(std::string text);
std::string inputText(std::string text);
std::string inputNum(std::string num);
std::string inputIndex(std::string text, int totalC);

#endif