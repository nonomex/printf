/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aammirat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:47:11 by aammirat          #+#    #+#             */
/*   Updated: 2022/12/28 11:49:59 by aammirat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *c);
int	ft_putadd(void *c);
int	ft_putnbr(int c);
int	ft_putnbruns(unsigned int c);
int	ft_putnbrbase(unsigned int c, char x);

#endif //FT_PRINTF_H
