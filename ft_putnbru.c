/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:38:08 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 01:51:10 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrtnu(unsigned int num, int *cnt)
{
	char	c;

	if (num == 0)
		return ;
	ft_putnbrtnu(num / 10, cnt);
	c = num % 10 + '0';
	write(1, &c, 1);
	*cnt += 1;
}

void	ft_putnbru(unsigned int nb, int *cnt)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		*cnt += 1;
		return ;
	}
	ft_putnbrtnu(nb, cnt);
}
