/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:21:17 by bbouagou          #+#    #+#             */
/*   Updated: 2022/11/03 22:15:09 by bbouagou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(t_list **list, char *string)
{
	int	i;

	i = -1;
	if (!string)
	{
		(*list)->count += write(1, "(null)", 6);
		return ;
	}
	while (string[++i])
	(*list)->count += write(1, &string[i], 1);
}
