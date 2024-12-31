/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:18:52 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/01 19:41:16 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(const char *string, int *count)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (string[i])
	{
		write(1, &string[i], 1);
		i++;
		(*count)++;
	}
}
