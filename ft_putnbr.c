/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:29:54 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/23 13:43:44 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	aux;
	char	num_char;
	int		len;

	aux = nb;
	len = 0;
	if (aux < 0)
	{
		write(1, "-", 1);
		aux = -aux;
		len++;
	}
	if (aux / 10 != 0)
	{
		len += ft_putnbr(aux / 10);
	}
	num_char = '0' + (aux % 10);
	len++;
	write(1, &num_char, 1);
	return (len);
}
