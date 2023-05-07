/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:21:42 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 23:07:18 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexmin(unsigned int num, int *cnt)
{
	int		mod;
	char	buff[25];
	int		a;

	if (!cnt)
		return ;
	a = 0;
	if (!num)
	{
		write(1, "0", 1);
		(*cnt)++;
	}
	while (num > 0)
	{
		mod = num % 16;
		num = num / 16;
		buff[a++] = "0123456789abcdef"[mod];
	}
	while (--a >= 0)
	{
		write(1, &buff[a], 1);
		(*cnt)++;
	}
}

#include <unistd.h>

int	main(void)
{
	unsigned int	num;
	int cnt;

	num = 305441741;
	cnt = 0;
	ft_hexmin(num, &cnt);
	write(1, "\n", 1);
	num = 400384;
	ft_hexmin(num, &cnt);
	write(1, "\n", 1);
	return (0);
}
