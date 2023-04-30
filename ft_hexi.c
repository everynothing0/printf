/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:47:23 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/30 02:55:35 by cde-voog         ###   ########.fr       */
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

int	ft_hexid(unsigned num, const char conv)
{

}
