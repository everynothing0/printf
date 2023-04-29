/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 03:23:42 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/29 03:57:27 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbft.h"
#include "printf.h"

int	ft_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num /16;
	}
	return (len);
}
