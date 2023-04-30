/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:47:23 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/30 04:37:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_lenhexi(unsigned num) // int len
{
	int	len;

	len = 0;
	/*if (num >= 0)
	 {
		len+= 1;
		num = num / 16;
	 } */
	while (num != 0)
	{
		len+= 1;
		num = num / 16;
	}
	return (len);
}

void	ft_hexid(unsigned num, const char conv)
{
	if (num >= 16)
	{
		ft_hexi(num / 16, conv);
		ft_hexi(num % 16, conv);
	}
	else
	{
		if (num >= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (conv == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (conv == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	print_hexi(unsigned int num, const char conv)
{
	if (num == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else
		ft_hexid(num, conv);
	return (ft_lenhexi(num));
}
