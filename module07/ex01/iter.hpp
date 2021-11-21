/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:02:58 by mbarut            #+#    #+#             */
/*   Updated: 2021/11/21 17:53:12 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename addr, typename len, typename func>
void iter(addr &a, len l, func &f)
{
	for (int i = 0; i < l; i++)
		f(a[i]);
}
