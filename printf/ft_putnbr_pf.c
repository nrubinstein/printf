/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:23:56 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/01 17:29:58 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		(*count)++;
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_pf(nbr / 10, count);
	ft_putchar_pf((nbr % 10) + '0', count);
}
