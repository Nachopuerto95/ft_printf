/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:16:34 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/04/07 20:22:01 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	do_pointer(va_list list)
{
	size_t	ptr;
	int		len;

	len = 0;
	ptr = va_arg(list, size_t);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		len += 5;
	}
	else
	{
		ft_putstr("0x");
		len += 2;
		len += ft_putnbr_base(ptr, HEX_LOW_BASE);
	}
	return (len);
}

int	read_format(va_list list, const char *str)
{
	int		len;

	len = 0;
	if (*str == 'c')
		len = ft_putchar(va_arg(list, int));
	if (*str == 's')
		len = ft_putstr(va_arg(list, char *));
	if (*str == 'i' || *str == 'd')
		len = ft_putnbr(va_arg(list, int));
	if (*str == 'u')
		len = ft_putnbr_u(va_arg(list, unsigned int));
	if (*str == 'x')
		len = ft_putnbr_base(va_arg(list, unsigned int), HEX_LOW_BASE);
	if (*str == 'X')
		len = ft_putnbr_base(va_arg(list, unsigned int), HEX_UP_BASE);
	if (*str == '%')
		len = ft_putchar('%');
	if (*str == 'p')
		len = do_pointer(list);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list		list;
	int			len;

	len = 0;
	if (!str)
		return (-1);
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += read_format(list, str);
		}
		else
		{
			write(1, str, 1);
			len += 1;
		}
		if (*str)
			str++;
	}
	va_end(list);
	return (len);
}
