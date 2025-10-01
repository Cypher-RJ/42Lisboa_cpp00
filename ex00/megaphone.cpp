/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:48:37 by rcesar-d          #+#    #+#             */
/*   Updated: 2025/10/01 13:29:48 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<cctype>
#include<cstdio>
#include<iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(size_t i = 1; av[i]; i++)
	{
		for(size_t j = 0; av[i][j]; j++)
			av[i][j] = std::toupper(av[i][j]);
		std::cout << (av[i]);
	}
	std::cout << std::endl;
	return(0);
}