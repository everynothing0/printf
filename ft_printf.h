/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 00:39:35 by cde-voog          #+#    #+#             */
/*   Updated: 2023/05/07 23:43:06 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_adress(void *num, int *cnt);
void	ft_putchar(int c, int *cnt);
void	ft_hexmaj(unsigned int num, int *cnt);
void	ft_hexmin(unsigned int num, int *cnt);
void	ft_printf(const char *str, ...);
void	ft_putnbr(int nb, int *cnt);
void	ft_putnbru(unsigned int nb, int *cnt);
void	ft_putstr(char *str, int *cnt);

#endif
