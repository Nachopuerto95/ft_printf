/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:13:36 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/23 13:43:50 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	long	aux;
	char	num_char;
	int		len;

	len = 0;
	aux = nb;
	if (aux / 10 != 0)
	{
		len += ft_putnbr_u(aux / 10);
	}
	num_char = '0' + (aux % 10);
	len++;
	write(1, &num_char, 1);
	return (len);
}
