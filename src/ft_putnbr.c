/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:10:07 by bbouagou          #+#    #+#             */
/*   Updated: 2022/11/03 22:25:18 by bbouagou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(t_list **list, int nbr, unsigned int u)
{
	char	*s;

	if (nbr && !u)
		s = ft_itoa(nbr);
	else if (!nbr && u)
		s = ft_itoau(u);
	else
		s = ft_itoa(nbr);
	ft_putstr(&(*list), s);
	free(s);
}
