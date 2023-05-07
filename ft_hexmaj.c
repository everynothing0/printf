/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexmaj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:06:00 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 23:33:34 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_hexmaj(unsigned int num, int *cnt)
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
		*cnt += 1;
	}
	while (num != 0)
	{
		mod = num % 16;
		num = num / 16;
		buff[a++] = "012346789ABCDEF"[mod];
	}
	while (--a >= 0)
	{
		write(1, &buff[a], 1);
		*cnt += 1;
	}
}

int		main(void)
{
	unsigned int	num;
	int				counter;

	num = 305441741;
	counter = 0;
	write(1, "Numéro en hexadécimal majuscule : ", 34);
	ft_hexmaj(num, &counter);
	write(1, "\n", 1);
	write(1, "Nombre de caractères affichés : ", 32);
}
