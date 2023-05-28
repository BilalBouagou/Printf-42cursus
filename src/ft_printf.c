/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:02:31 by bbouagou          #+#    #+#             */
/*   Updated: 2022/11/03 22:42:42 by bbouagou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_init(t_list **list)
{
	(*list)->count = 0;
}

void	ft_handler(char specifier, t_list **list)
{
	if (specifier == 'c')
		ft_putchar(&(*list), va_arg((*list)->ptr, int));
	else if (specifier == 's')
		ft_putstr(&(*list), va_arg((*list)->ptr, char *));
	else if (specifier == 'p')
		ft_putptr(&(*list), va_arg((*list)->ptr, unsigned long));
	else if (specifier == 'x' || specifier == 'X')
		ft_puthex(&(*list), va_arg((*list)->ptr, unsigned int), specifier);
	else if (specifier == 'd' || specifier == 'i' || specifier == 'u')
	{
		if (specifier == 'u')
			ft_putnbr(&(*list), 0, va_arg((*list)->ptr, unsigned int));
		else
			ft_putnbr(&(*list), va_arg((*list)->ptr, int), 0);
	}
	else if (specifier == '%')
		ft_putchar(&(*list), '%');
}

int	ft_printf(const char *format, ...)
{
	t_list	*list;
	int		i;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (-1);
	i = 0;
	ft_init(&list);
	va_start(list->ptr, format);
	while (format[i])
	{
		if (format[i] != '%')
			list->count += write(1, &format[i], 1);
		else
		{
			ft_handler(format[++i], &list);
		}
		i++;
	}
	va_end(list->ptr);
	i = list->count;
	free(list);
	return (i);
}
