/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:45:35 by aammirat          #+#    #+#             */
/*   Updated: 2023/03/01 10:43:28 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putchar_fd(char c)
{
	write (1, &c, 1);
}

int	ft_putnbruns(unsigned int c)
{
	int	i;

	if (c < 10)
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
