/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbouagou <bbouagou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:35:51 by bbouagou          #+#    #+#             */
/*   Updated: 2022/11/03 22:42:04 by bbouagou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list
{
	va_list	ptr;
	int		count;
}	t_list;

int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char	*ft_itoau(unsigned int n);
void	ft_putchar(t_list **list, char c);
void	ft_puthex(t_list **list, unsigned int x, char specifier);
void	ft_putnbr(t_list **list, int nbr, unsigned int u);
void	ft_putptr(t_list **list, unsigned long p);
void	ft_putstr(t_list **list, char *string);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen(const char *s);

#endif