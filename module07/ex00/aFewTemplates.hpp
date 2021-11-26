/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aFewTemplates.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:02:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/26 10:12:50 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b)
{
	T temp (a);
	a = b;
	b = temp;
}

template <typename T>
T& min(T &a, T &b)
{
	return a > b ? b : a;
}

template <typename T>
T& max(T &a, T &b)
{
	return a > b ? a : b;
}