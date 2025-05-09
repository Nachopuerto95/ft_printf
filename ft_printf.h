/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:50:20 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/23 13:44:11 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define HEX_UP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int	ft_printf(char const *str, ...);

int	ft_putchar(int a);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_base(size_t nbr, char *base);
int	ft_putstr(char *str);

#endif