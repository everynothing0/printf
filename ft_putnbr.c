/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:07:22 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 01:21:04 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrtn(unsigned int num, int *cnt)
{
	char	c;

	if (num == 0)
		return ;
	ft_putnbrtn(num / 10, cnt);
	c = num % 10 + '0';
	write(1, &c, 1);
	*cnt += 1;
}

void	ft_putnbr(int nb, int *cnt)
{
	unsigned int	num;

	if (nb == 0)
	{
		write(1, "0", 1);
		*cnt += 1;
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		*cnt += 1;
		num = -nb;
	}
	else
		num = nb;
	ft_putnbrtn(num, cnt);
}
