/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 04:55:11 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/08 00:35:04 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conver(va_list args, const char *str, int *len, int i)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (str[i] == 'p')
		ft_adress(va_arg(args, void *), len);
	else if (str[i] == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (str[i] == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (str[i] == 'u')
		ft_putnbru(va_arg(args, unsigned int), len);
	else if (str[i] == 'x')
		ft_hexmin(va_arg(args, unsigned int), len);
	else if (str[i] == 'X')
		ft_hexmaj(va_arg(args, unsigned int), len);
	else if (str[i] == '%')
	{
		write(1, "%", 1);
		*len += 1;
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	if (str == NULL)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_conver(args, str, &len, i);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
