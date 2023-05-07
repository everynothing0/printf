/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:21:42 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 23:27:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void	ft_hexmin(unsigned int num, int *cnt)
{
	int		mod;
	char	buff[25];
	int		a;

	if (!cnt)
		return ;
	a = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		(*cnt)++;
	}
	while (num != 0)
	{
		mod = num % 16;
		num = num / 16;
		buff[a++] = "0123456789abcdef"[mod];
	}

	if (num == UINT_MAX / 16)
		buff[a++] = "0123456789abcdef"[num % 16];
	while (--a >= 0)
	{
		write(1, &buff[a], 1);
		(*cnt)++;
	}
}

#include <unistd.h>
#include <limits.h>

int	main(void)
{
	unsigned int	num;
	int cnt;

	num = 305441741;
	cnt = 0;
	ft_hexmin(num, &cnt);
	write(1, " (expected: 123abcd)\n", 22);

	num = 400384;
	cnt = 0;
	ft_hexmin(num, &cnt);
	write(1, " (expected: 61c00)\n", 19);

	num = 0;
	cnt = 0;
	ft_hexmin(num, &cnt);
	write(1, " (expected: 0)\n", 15);

	num = -1;
	cnt = 0;
	ft_hexmin(num, &cnt);
	write(1, " (expected: nothing, cnt unchanged)\n", 37);

	num = 42;
	cnt = -1;
	ft_hexmin(num, &cnt);
	write(1, " (ex: error, cnt unchanged)\n", 29);

	return (0);
}
