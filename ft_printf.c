/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 04:55:11 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/29 19:04:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_conver(va_list args, const char conv)
{
	int	len; // or delete

	len = 0; // or delete and replace with add return 
	if (conv == 'c') // return (ft_putchar(va_arg(args, int))); 
		len += ft_putchar(va_arg(args, int)); // va_arg to review
	else if (conv == 's')
		len += ft_putstr(va_arg(args, char *)); // add putstr
	else if (conv == 'p')
		len += ft_ptr(va_arg(args, unsigned long long)); //rename
	else if (conv == 'd' || conv == 'i')
		len += ft_putnbr_base(va_arg(args, int)); // learn putnbrbase
	else if (conv == 'u')
		len += ft_unsigned(va_arg(args, unsigned int)) // function ft_unsigned
	else if (conv == 'x' || conv == 'X')
		len += ft_hexi(va_arg(args, unsigned int)) // function hexi
	else if (conv == '%')
		len += ft_percent(); // do function print percent
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (str[])
	{
	}
	va_end(args);
	return ();
}
