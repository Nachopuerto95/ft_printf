/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:26:24 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/23 13:43:54 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_print_nbr(size_t nbr, char *base)
{
	int				len;
	unsigned long	base_len;

	base_len = 16;
	len = 0;
	if (nbr >= base_len)
	{
		len += ft_print_nbr(nbr / base_len, base);
	}
	write(1, &base[nbr % base_len], 1);
	len++;
	return (len);
}

int	ft_putnbr_base(size_t nbr, char *base)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	nbr_len += ft_print_nbr(nbr, base);
	return (nbr_len);
}
