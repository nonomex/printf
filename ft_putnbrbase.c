/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:46:12 by aammirat          #+#    #+#             */
/*   Updated: 2023/03/01 10:43:02 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putchar_fd(int c, char x)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	write (1, &base[c], 1);
}

int	ft_putnbrbase(unsigned int c, char x)
{
	int	i;

	if (c < 16)
	{
		ft_putchar_fd(c, x);
		return (1);
	}
	else
	{
		i = ft_putnbrbase(c / 16, x);
		ft_putchar_fd(c % 16, x);
		return (1 + i);
	}
}
