/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:45:03 by aammirat          #+#    #+#             */
/*   Updated: 2023/03/01 10:42:41 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putchar_fd(char c)
{
	write (1, &c, 1);
}

int	ft_putnbr(int c)
{
	int	i;

	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (c < 0)
	{
		write (1, "-", 1);
		return (1 + ft_putnbr(c * -1));
	}
	else if (c < 10)
	{
		ft_putchar_fd(c + '0');
		return (1);
	}
	else
	{
		i = ft_putnbr(c / 10);
		ft_putchar_fd(c % 10 + 48);
		return (1 + i);
	}
}
