/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:33:06 by nrubinst          #+#    #+#             */
/*   Updated: 2024/12/18 13:42:45 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_pf(unsigned int num, int *count)
{
	if (num > 9)
		ft_putunsigned_pf(num / 10, count);
	ft_putchar_pf((num % 10) + '0', count);
}
