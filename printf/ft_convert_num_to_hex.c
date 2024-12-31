/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num_to_hex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:56:15 by nrubinst          #+#    #+#             */
/*   Updated: 2024/12/18 13:51:33 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_num_to_hex(unsigned int num, char format, int *count)
{
	int	remains;

	if (num >= 16)
		ft_convert_num_to_hex(num / 16, format, count);
	remains = num % 16;
	if (remains < 10)
		ft_putchar_pf(remains + '0', count);
	else if (format == 'x')
		ft_putchar_pf(remains - 10 + 'a', count);
	else if (format == 'X')
		ft_putchar_pf(remains - 10 + 'A', count);
}
