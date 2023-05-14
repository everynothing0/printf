/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:39:11 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/08 00:50:38 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadress(unsigned long int num, int *cnt)
{
	int		mod;
	char	buff[25];
	int		a;

	a = 0;
	if (!num)
	{
		write(1, "(nil)", 5);
		*cnt += 5;
	}
	while (num != 0)
	{
		mod = num % 16;
		num = num / 16;
		buff[a++] = "0123456789abcdef"[mod];
	}
	while (--a >= 0)
	{
		write(1, &buff[a], 1);
		*cnt += 1;
	}
}

void	ft_adress(void *num, int *cnt)
{
	if (num)
	{
		write(1, "0x", 2);
		*cnt += 2;
	}
	ft_hexadress((unsigned long int) num, cnt);
}
