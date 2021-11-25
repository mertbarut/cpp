/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:18:02 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/25 12:19:07 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

typedef struct sData {

	int				index;
	std::string		name;
	unsigned int	age;
	float			height;
	float			weight;
	float			bmi;

} Data;

#endif