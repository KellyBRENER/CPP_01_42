/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:18:13 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/22 14:38:29 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return;
}

void	Harl::debug(void) {
	std::cout<<"***********DEBUG**********"<<std::endl;
	std::cout<<"I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"\
	<<std::endl;
}

void	Harl::info(void) {
	std::cout<<"***********INFO**********"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, I wouldn’t be \
asking for more!"<<std::endl;
}

void	Harl::warning(void) {
	std::cout<<"***********WARNING**********"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here since \
last month."<<std::endl;
}

void	Harl::error(void) {
	std::cout<<"***********ERROR**********"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."\
	<<std::endl;
}

void	Harl::complain(std::string level) {
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	i = 0;
	while (i < 4) {
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3: {
		this->error();
		break;
	}
	default: {
		std::cout<<"...I have nothing to complain about that..."<<std::endl;
		std::cout<<"if you want to heard me complaining, enter :\nDEBUG,\nINFO,\
\nWARNING,\nor\nERROR"<<std::endl;
	}
	}
}

Harl::~Harl(void) {
	return;
}
