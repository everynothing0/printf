/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 04:55:11 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/29 05:33:57 by cde-voog         ###   ########.fr       */
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
	int	len;

	len = 0;
	if (conv == 'c')
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
