/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:44:19 by aammirat          #+#    #+#             */
/*   Updated: 2023/03/01 11:17:26 by aammirat         ###   ########.fr       */
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

static int	putnbrbase(size_t c, char x)
{
	int	i;

	if (c < 16)
	{
		ft_putchar_fd(c, x);
		return (1);
	}
	else
	{
		i = putnbrbase(c / 16, x);
		ft_putchar_fd(c % 16, x);
		return (1 + i);
	}
}

int	ft_putadd(void *c)
{
	int	tot;

	if (c == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	tot = 2;
	write (1, "0x", 2);
	tot += putnbrbase((size_t)c, 'x');
	return (tot);
}
