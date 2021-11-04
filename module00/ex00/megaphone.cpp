/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:32:44 by mbarut            #+#    #+#             */
/*   Updated: 2021/10/31 16:50:34 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int	s_count;
	int	i = 0;
	int	j = 0;

	s_count = argc - 1;
	if (s_count == 0)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (s_count > 0)
	{
		i++;
		j = 0;
		while (argv[i][j])
		{
			char c = argv[i][j];
			if (c >= 'a' && c <= 'z')
				std::cout << (char)std::toupper(c);
			else
				std::cout << c;
			j++;
		}
		s_count--;
	}
	std::cout << std::endl;
	return 0;
}
