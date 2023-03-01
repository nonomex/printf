/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:51:57 by aammirat          #+#    #+#             */
/*   Updated: 2023/03/01 16:06:29 by aammirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	launch(char c, va_list pa)
{
	if (c == 'c')
		return (ft_putchar(va_arg(pa, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(pa, char *)));
	else if (c == 'p')
		return (ft_putadd(va_arg(pa, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(pa, int)));
	else if (c == 'u')
		return (ft_putnbruns(va_arg(pa, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_putnbrbase(va_arg(pa, unsigned int), c));
	else if (c == '%')
	{
		write(1, &c, 1);
		return (1);
	}
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	pa;
	int		i;
	int		end;

	if (write(1, 0, 0) != 0)
		return (-1);
	va_start(pa, str);
	end = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			end += launch(str[i++ + 1], pa);
		}
		else if (str[i] == '%')
			return (-1);
		else
		{
			write(1, &str[i], 1);
			end++;
		}
	}
	va_end(pa);
	return (end);
}
