/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:40:21 by aammirat          #+#    #+#             */
/*   Updated: 2022/12/28 11:40:26 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
		c = "(null)";
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
	}
	return (i);
}
